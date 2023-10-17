
/* GameBoosterSettingWithGoldSetting CreateDefaultBool(String, KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultBool
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&StringLiteral_sk);
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingBoolBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                        );
  if (this != (KogamaSettingBoolBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (this,StringLiteral_sk,1,parent,(MethodInfo *)0x0);
    if (parent != (KogamaSettingsCollectionBase *)0x0) {
      pMStack1 = (parent->klass->vtable).AddChild.method;
      (*(parent->klass->vtable).AddChild.methodPtr)();
      return (GameBoosterSettingWithGoldSetting *)parent;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameBoosterSettingWithGoldSetting *)(*pcVar2)();
  return pGVar3;
}


/* GameBoosterSettingWithGoldSetting CreateDefaultFloat(Single, Single, Single, String,
   KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultFloat
          (float defaultVal,float minVal,float maxVal,String *key,KogamaSettingsCollectionBase *root
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   );
    func_?(&StringLiteral_sk);
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingNumericBase_1_System_Single_ *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                        );
  if (this != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single___ctor
              (this,StringLiteral_sk,defaultVal,minVal,maxVal,parent,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    if (parent != (KogamaSettingsCollectionBase *)0x0) {
      (*(parent->klass->vtable).AddChild.methodPtr)();
      return (GameBoosterSettingWithGoldSetting *)parent;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pGVar2 = (GameBoosterSettingWithGoldSetting *)(*pcVar1)();
  return pGVar2;
}


/* GameBoosterSettingWithGoldSetting CreateDefaultGameBoosterSettingWithGoldSetting(String,
   KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                   );
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                        );
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase__ctor(this,key,root,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?(&
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                     );
      func_?(&StringLiteral_gsk);
      cRam_? = '\x01';
    }
    pKVar1 = (KogamaSettingNumericBase_1_System_Object_ *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                            );
    if (pKVar1 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
      KogamaSettingNumericBase_1_System_Object___ctor
                (pKVar1,StringLiteral_gsk,(Object *)0xa,(Object *)0x5,(Object *)0x32,this,
                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                );
      (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar1,(this->klass->vtable).AddChild.method)
      ;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pKVar1 = (KogamaSettingNumericBase_1_System_Object_ *)func_?();
      if (pKVar1 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
        KogamaSettingNumericBase_1_System_Object___ctor
                  (pKVar1,StringLiteral_tsk,(Object *)0x258,(Object *)0x258,(Object *)0x258,this,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                  );
        (*(this->klass->vtable).AddChild.methodPtr)
                  (this,pKVar1,(this->klass->vtable).AddChild.method);
        if (root != (KogamaSettingsCollectionBase *)0x0) {
          (*(root->klass->vtable).AddChild.methodPtr)
                    (root,this,(root->klass->vtable).AddChild.method);
          return (GameBoosterSettingWithGoldSetting *)this;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameBoosterSettingWithGoldSetting *)(*pcVar2)();
  return pGVar3;
}


/* GameBoosterSettingWithGoldSetting CreateDefaultInt(Int32, Int32, Int32, String,
   KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultInt
          (int32_t defaultVal,int32_t minVal,int32_t maxVal,String *key,
          KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_sk);
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingNumericBase_1_System_Object_ *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                        );
  if (this != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
    KogamaSettingNumericBase_1_System_Object___ctor
              (this,StringLiteral_sk,(Object *)defaultVal,(Object *)minVal,(Object *)maxVal,parent,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    if (parent != (KogamaSettingsCollectionBase *)0x0) {
      (*(parent->klass->vtable).AddChild.methodPtr)();
      return (GameBoosterSettingWithGoldSetting *)parent;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pGVar2 = (GameBoosterSettingWithGoldSetting *)(*pcVar1)();
  return pGVar2;
}


/* KogamaSettingWrapperBase CreateGameBoosterSettingPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&StringLiteral_JumpPower);
    func_?(&StringLiteral_GameBoosterPrototypeSetting);
    func_?(&StringLiteral_XRayVision);
    func_?(&StringLiteral_Ammo);
    func_?(&StringLiteral_PoisonResist);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_GameCoinBoost);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase__ctor
              (this,StringLiteral_GameBoosterPrototypeSetting,(KogamaSettingsCollectionBase *)0x0,
               (MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultInt
              (0x32,10,100,StringLiteral_PoisonResist,this,(MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultInt
              (0x32,10,100,StringLiteral_JumpPower,this,(MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultInt
              (10,5,100,StringLiteral_Speed,this,(MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultInt
              (0x32,0x19,200,StringLiteral_Health,this,(MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultBool
              (StringLiteral_GameCoinBoost,this,(MethodInfo *)0x0);
    GameBoosterPrototypeSettingsManager_CreateDefaultBool(StringLiteral_Ammo,this,(MethodInfo *)0x0)
    ;
    GameBoosterPrototypeSettingsManager_CreateDefaultBool
              (StringLiteral_XRayVision,this,(MethodInfo *)0x0);
    return (KogamaSettingWrapperBase *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar1)();
  return pKVar2;
}


/* KogamaSettingNumericBase`1[System.Int32] CreateGoldSetting(GameBoosterSettingWithGoldSetting) */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateGoldSetting
          (GameBoosterSettingWithGoldSetting *gameBoosterSettingWithGoldSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_gsk);
    cRam_? = '\x01';
  }
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                          );
  if (pKVar1 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
    KogamaSettingNumericBase_1_System_Object___ctor
              ((KogamaSettingNumericBase_1_System_Object_ *)pKVar1,StringLiteral_gsk,(Object *)0xa,
               (Object *)0x5,(Object *)0x32,
               (KogamaSettingsCollectionBase *)gameBoosterSettingWithGoldSetting,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    return pKVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar2)();
  return pKVar1;
}


/* KogamaSettingNumericBase`1[System.Int32] CreateTimeSetting(GameBoosterSettingWithGoldSetting) */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateTimeSetting
          (GameBoosterSettingWithGoldSetting *gameBoosterSettingWithGoldSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_tsk);
    cRam_? = '\x01';
  }
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                          );
  if (pKVar1 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
    KogamaSettingNumericBase_1_System_Object___ctor
              ((KogamaSettingNumericBase_1_System_Object_ *)pKVar1,StringLiteral_tsk,(Object *)0x258
               ,(Object *)0x258,(Object *)0x258,
               (KogamaSettingsCollectionBase *)gameBoosterSettingWithGoldSetting,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    return pKVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar2)();
  return pKVar1;
}


/* Dictionary`2[System.Object,System.Object] GetDefaultSettingsSubSet(List`1[System.String]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_GetDefaultSettingsSubSet
          (List_1_System_String_ *defaultSettingsSubset,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pKVar7 = GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes
                       ((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      unaff_EDI = &
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
      ;
      func_?();
      func_?(&
                      MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4___GetSettingsDictionary_b__3_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                     );
      func_?(&
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4
                     );
      cRam_? = '\x01';
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
      LStack_8._current =
           (RegexCharClass_SingleRange)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                          );
      if (LStack_8._current != (RegexCharClass_SingleRange)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)LStack_8._current,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Dictionary__
                  );
        value[1].klass = (Object__Class *)LStack_8._current;
        func_?(value + 1,LStack_8._current);
        LStack_8._current =
             (RegexCharClass_SingleRange)
             func_?(
                            TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                            );
        if (LStack_8._current != (RegexCharClass_SingleRange)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    ((Action_1_Object_ *)LStack_8._current,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4___GetSettingsDictionary_b__3_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                     ,(MethodInfo *)0x0);
          KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                    (pKVar7,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                             *)LStack_8._current,(MethodInfo *)0x0);
          this = value[1].klass;
          if (defaultSettingsSubset != (List_1_System_String_ *)0x0) {
            pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_8,
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )defaultSettingsSubset,
                                MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                               );
            key = pLVar9->_current;
            LStack_8._version = 0;
            uStack_1 = 1;
            LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
            while( true ) {
              bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                );
              if (bVar10 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&stack0xffffffc0,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                           ,(MethodInfo *)unaff_EDI);
                *unaff_FS_OFFSET = uStack_3;
                return pDVar6;
              }
              if (this == (Object__Class *)0x0) break;
              pKVar7 = (KogamaSettingWrapperBase *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_System__String_
                                 );
              unaff_EDI = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting___Class
                           **)&UNK_?;
              source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                                 (pKVar7,(MethodInfo *)0x0);
              MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                        (pDVar6,source,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar12)();
  return pDVar6;
}


/* Dictionary`2[System.String,MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes.GameBoosterSettingWithGoldSetting]
   GetSettingsDictionary(KogamaSettingWrapperBase) */

Dictionary_2_System_String_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings
  ::GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
  GameBoosterPrototypeSettingsManager_GetSettingsDictionary
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4___GetSettingsDictionary_b__3_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this = (Object__Class *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                          );
    if (this != (Object__Class *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Dictionary__
                );
      value[1].klass = this;
      func_?(value + 1,this);
      this_00 = (Action_1_Object_ *)
                func_?(
                               TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                               );
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,value,
                   MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass4___GetSettingsDictionary_b__3_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   ,(MethodInfo *)0x0);
        KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                  (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)this_00,(MethodInfo *)0x0);
        return (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                *)value[1].klass;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar1)();
  return pDVar2;
}


/* List`1[MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes.GameBoosterSettingWithGoldSetting]
   GetSettingsSettingsList(KogamaSettingWrapperBase) */

List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings
  ::GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
  GameBoosterPrototypeSettingsManager_GetSettingsSettingsList
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this = (Object__Class *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                          );
    if (this != (Object__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                );
      value[1].klass = this;
      func_?(value + 1,this);
      this_00 = (Action_1_Object_ *)
                func_?(
                               TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                               );
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,value,
                   MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   ,(MethodInfo *)0x0);
        KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                  (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)this_00,(MethodInfo *)0x0);
        return (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                *)value[1].klass;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar1)();
  return pLVar2;
}

