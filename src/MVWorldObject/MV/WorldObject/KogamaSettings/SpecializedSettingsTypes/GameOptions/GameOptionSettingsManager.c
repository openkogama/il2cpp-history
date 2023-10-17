
/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   GetSettingsSettingsList(KogamaSettingWrapperBase) */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_GetSettingsSettingsList
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this = (Object__Class *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                          );
    if (this != (Object__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
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
                   MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   ,(MethodInfo *)0x0);
        KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                  (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)this_00,(MethodInfo *)0x0);
        return (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                *)value[1].klass;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)(*pcVar1)();
  return pLVar2;
}


/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   get_GetOptions() */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
            (GameOptionSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).woData;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&StringLiteral_AllowRevive);
    func_?(&StringLiteral_GameOptionsRoot);
    cRam_? = '\x01';
  }
  this_00 = (KogamaSettingsCollectionBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
  if (this_00 != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase__ctor
              (this_00,StringLiteral_GameOptionsRoot,(KogamaSettingsCollectionBase *)0x0,
               (MethodInfo *)0x0);
    this_01 = (KogamaSettingBoolBase *)
              func_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                             );
    if (this_01 != (KogamaSettingBoolBase *)0x0) {
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this_01,StringLiteral_AllowRevive,1,this_00,(MethodInfo *)0x0);
      (*(this_00->klass->vtable).AddChild.methodPtr)
                (this_00,this_01,(this_00->klass->vtable).AddChild.method);
      this_02 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
                 *)func_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                                  );
      if (this_02 !=
          (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
           *)0x0) {
        mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::
        Object,System::Object],Object,Object,Object]::
        Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
                  (this_02,(Object *)0x0,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   ,(MethodInfo *)0x0);
        source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                           (pDVar1,(KogamaSettingWrapperBase *)this_00,
                            (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)this_02,(MethodInfo *)0x0);
        pDVar1 = KogamaSettingsCore::KogamaSettingTools::
                 KogamaSettingTools_KogamaSettingsToDictionary
                           ((KogamaSettingWrapperBase *)this_00,(MethodInfo *)0x0);
        target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                           (pDVar1,(KogamaSettingWrapperBase *)this_00,
                            (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)this_02,(MethodInfo *)0x0);
        if (source != (KogamaSettingWrapperBase *)0x0) {
          KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_OverrideValues
                    (target,source,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,unaff_EDI);
          this_03 = (Object__Class *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                                   );
          if (this_03 != (Object__Class *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)this_03,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
                      );
            value[1].klass = this_03;
            func_?(value + 1,this_03);
            this_04 = (Action_1_Object_ *)
                      func_?(
                                     TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                                     );
            if (this_04 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (this_04,value,
                         MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                         ,(MethodInfo *)0x0);
              KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                        (target,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                 *)this_04,(MethodInfo *)0x0);
              return (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                      *)value[1].klass;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)(*pcVar2)();
  return pLVar3;
}

