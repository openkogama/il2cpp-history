
/* KogamaSettingWrapperBase CreateAvatarPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateAvatarPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APFloatCalcZeroValueLinear
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&StringLiteral_UnableToCollectModifierPickups);
    func_?(&StringLiteral_DamageReduction);
    func_?(&StringLiteral_OxygenSupply);
    func_?(&StringLiteral_JumpHeight);
    func_?(&StringLiteral_MaxHealth);
    func_?(&StringLiteral_EndlessAmmo);
    func_?(&StringLiteral_SlowFall);
    func_?(&StringLiteral_FrictionMultiplier);
    func_?(&StringLiteral_DoubleJump);
    func_?(&StringLiteral_SuperSpeed);
    func_?(&StringLiteral_BreathesWater);
    func_?(&StringLiteral_UnableToEquipWeapons);
    func_?(&StringLiteral_CanWallJumpAnySurface);
    func_?(&StringLiteral_AvatarSettings);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this,StringLiteral_AvatarSettings,(KogamaSettingsCollectionBase *)0x0,(MethodInfo *)0x0
            );
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = _UNK_?;
  pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
           func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                           ,&stack0xffffffd0);
  pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
  pSVar7 = StringLiteral_SuperSpeed;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                    ,uVar4,uVar1,uVar2,uVar3);
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar6,pSVar7,100,0x14,200,this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar6[1].klass = pKVar5;
  func_?(pKVar6 + 1,pKVar5);
  pKVar6[1].monitor = (MonitorData *)0x0;
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    (*(code *)(this->klass->vtable).AddChild.method)
              (this,pKVar6,(this->klass->vtable).CopyWithOutChildren.methodPtr);
    pKVar8 = (KogamaSettingBoolBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                            );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_DoubleJump,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    pKVar8[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)
              (this,pKVar8,(this->klass->vtable).CopyWithOutChildren.methodPtr);
    pKVar8 = (KogamaSettingBoolBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                            );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_EndlessAmmo,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    pKVar8[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar9 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?();
    this_00 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
    pSVar7 = StringLiteral_OxygenSupply;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single___ctor
              (this_00,pSVar7,20.0,0.0,500.0,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    this_00[1].klass = pKVar9;
    func_?();
    this_00[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    func_?();
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    pSVar7 = StringLiteral_MaxHealth;
    if (cRam_? == '\0') {
      pSVar7 = (String *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar6,pSVar7,100,1,200,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    pKVar6[1].klass = pKVar5;
    func_?();
    pKVar6[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    func_?();
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    pSVar7 = StringLiteral_DamageReduction;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)&UNK_?;
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar6,pSVar7,0x14,10,0x50,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    pKVar6[1].klass = pKVar5;
    func_?();
    pKVar6[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    pSVar7 = StringLiteral_JumpHeight;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar6,pSVar7,100,0x14,200,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    pKVar6[1].klass = pKVar5;
    func_?();
    pKVar6[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    pSVar7 = StringLiteral_SlowFall;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar6,pSVar7,0x32,0x14,0x50,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    pKVar6[1].klass = pKVar5;
    func_?();
    pKVar6[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar8 = (KogamaSettingBoolBase *)func_?();
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_CanWallJumpAnySurface,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0x19;
    pKVar8[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    pSVar7 = StringLiteral_FrictionMultiplier;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar6,pSVar7,0x32,0x19,100,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    pKVar6[1].klass = pKVar5;
    func_?();
    pKVar6[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar8 = (KogamaSettingBoolBase *)func_?();
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_BreathesWater,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0x0;
    pKVar8[1].monitor = (MonitorData *)0x0;
    pIStack10 = (this->klass->vtable).CopyWithOutChildren.methodPtr;
    pKStack11 = this;
    pKStack12 = pKVar8;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pAStack13 =
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
    ;
    pKVar8 = (KogamaSettingBoolBase *)func_?();
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_UnableToEquipWeapons,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0xffffffce;
    pKVar8[1].monitor = (MonitorData *)0x0;
    (*(code *)(this->klass->vtable).AddChild.method)();
    pKVar8 = (KogamaSettingBoolBase *)func_?();
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar8,StringLiteral_UnableToCollectModifierPickups,1,this,(MethodInfo *)0x0);
    pKVar8[1].klass = (KogamaSettingBoolBase__Class *)0xffffffe2;
    pKVar8[1].monitor = (MonitorData *)0x0;
    pIStack14 = (this->klass->vtable).CopyWithOutChildren.methodPtr;
    pKStack15 = this;
    pKStack16 = pKVar8;
    (*(code *)(this->klass->vtable).AddChild.method)();
    return (KogamaSettingWrapperBase *)this;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pKVar18 = (KogamaSettingWrapperBase *)(*pcVar17)();
  return pKVar18;
}


/* KogamaSettingWrapperBase CreateHoverCraftPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateHoverCraftPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                   );
    func_?(&
                    MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                   );
    func_?(&
                    MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&
                    TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_HoverSpeed);
    func_?(&StringLiteral_HoverJump);
    func_?(&StringLiteral_RocketType);
    func_?(&StringLiteral_HoverSettings);
    func_?(&StringLiteral_HoverSubSettings);
    cRam_? = '\x01';
  }
  pKVar1 = (KogamaSettingsCollectionBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                          );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (pKVar1,StringLiteral_HoverSettings,(KogamaSettingsCollectionBase *)0x0,
             (MethodInfo *)0x0);
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this,StringLiteral_HoverSubSettings,pKVar1,(MethodInfo *)0x0);
  if (pKVar1 != (KogamaSettingsCollectionBase *)0x0) {
    (*(code *)(pKVar1->klass->vtable).AddChild.method)
              (pKVar1,this,(pKVar1->klass->vtable).CopyWithOutChildren.methodPtr);
    pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                             ,&stack0xfffffff8);
    this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)
              func_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                             );
    key = (MethodInfo **)StringLiteral_HoverSpeed;
    if (cRam_? == '\0') {
      key = &
            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      func_?();
      cRam_? = '\x01';
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (this_00,(String *)key,5,1,10,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    this_00[1].klass = pKVar2;
    func_?(this_00 + 1,pKVar2);
    this_00[1].monitor = (MonitorData *)0x2;
    method_00 = (KogamaSettingBoolBase *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                               );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (method_00,StringLiteral_HoverJump,1,this,(MethodInfo *)method_00);
    method_00[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    method_00[1].monitor = (MonitorData *)0x0;
    this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_01,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
    ;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                ((Dictionary_2_System_Int32_System_Int32_ *)this_01,0,10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                ((Dictionary_2_System_Int32_System_Int32_ *)this_01,1,100,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
      pKVar3 = (KogamaSettingEnumBase__Class *)0x2;
      puVar4 = &UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                ((Dictionary_2_System_Int32_System_Int32_ *)this_01,2,1000,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
      handle = 
      TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
      ;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar5,(MethodInfo *)0x0);
      pIVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                         ((IEnumerable *)pAVar6,
                          System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                         );
      min = System.Core.dll::System::Linq::Enumerable::Enumerable_Min_1
                      ((IEnumerable_1_System_Int32Enum_ *)pIVar7,
                       MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                      );
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)
                          TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
                          ,(MethodInfo *)0x0);
      pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar5,(MethodInfo *)0x0);
      pIVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                         ((IEnumerable *)pAVar6,
                          System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                         );
      max = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
                      ((IEnumerable_1_System_Int32Enum_ *)pIVar7,
                       MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                      );
      this_02 = (KogamaSettingEnumBase *)func_?();
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                (this_02,StringLiteral_RocketType,0,min,max,this,(MethodInfo *)0x0);
      this_02[1].klass = pKVar3;
      func_?();
      this_02[1].monitor = (MonitorData *)0x2;
      if (this != (KogamaSettingsCollectionBase *)0x0) {
        (*(code *)(this->klass->vtable).AddChild.method)(this,this_01);
        pKVar1 = this;
        (*(code *)(this->klass->vtable).AddChild.method)
                  (this,puVar4,(this->klass->vtable).CopyWithOutChildren.methodPtr);
        (*(code *)(this->klass->vtable).AddChild.method)
                  (this,this_02,(this->klass->vtable).CopyWithOutChildren.methodPtr);
        return (KogamaSettingWrapperBase *)pKVar1;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pKVar9 = (KogamaSettingWrapperBase *)(*pcVar8)();
  return pKVar9;
}


/* KogamaSettingWrapperBase GetRoot(AttributeSettingWoType) */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_GetRoot
          (AttributeSettingWoType__Enum attributeSettingWoType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
         ->static_fields->attributeSettingRoots;
  if (this != (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
    pKVar1 = (KogamaSettingWrapperBase *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this,attributeSettingWoType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_
                       );
    return pKVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar3)();
  return pKVar1;
}


/* AttributePrototypeSettingsManager() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePrototypeSettings::AttributePrototypeSettingsManager::
     AttributePrototypeSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  pKVar1 = AttributePrototypeSettingsManager_CreateAvatarPrototypes((MethodInfo *)0x0);
  if (this != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__Add
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this,0,(Object *)pKVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    pKVar1 = AttributePrototypeSettingsManager_CreateHoverCraftPrototypes((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__Add
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this,1,(Object *)pKVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
    ->static_fields->attributeSettingRoots =
         (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
          *)this;
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

