
/* KogamaSettingWrapperBase CreateAvatarPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateAvatarPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  pSVar1 = StringLiteral_AvatarSettings;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this->fields).originalScale.x = (float)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00)
  ;
  (this->fields).state = 0;
  (this->fields)._._._._.m_CachedPtr = pSVar1;
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)
           func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                           ,&stack0xffffffd8);
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
  pSVar1 = StringLiteral_SuperSpeed;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,100,0x14,200,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)(this,pKVar3,this->klass[1]._0.name);
  pKVar4 = (KogamaSettingBoolBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_DoubleJump,1,(KogamaSettingsCollectionBase *)this,
             (MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0x64;
  pKVar4[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar4 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_EndlessAmmo,1,(KogamaSettingsCollectionBase *)this,
             (MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0x64;
  pKVar4[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?();
  this_01 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
  pSVar1 = StringLiteral_OxygenSupply;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
  KogamaSettingNumericBase_1_System_Single___ctor
            (this_01,pSVar1,20.0,0.0,500.0,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  this_01[1].klass = pKVar5;
  this_01[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
  pSVar1 = StringLiteral_MaxHealth;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,100,1,200,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
  pSVar1 = StringLiteral_DamageReduction;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,0x14,10,0x50,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
  pSVar1 = StringLiteral_JumpHeight;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,100,0x14,200,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
  pSVar1 = StringLiteral_SlowFall;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,0x32,0x14,0x50,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar4 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_CanWallJumpAnySurface,1,(KogamaSettingsCollectionBase *)this,
             (MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0x19;
  pKVar4[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32___Class *)func_?();
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
  pSVar1 = StringLiteral_FrictionMultiplier;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar3,pSVar1,0x32,0x19,100,(KogamaSettingsCollectionBase *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  pKVar3[1].klass = pKVar2;
  pKVar3[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar4 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_BreathesWater,1,(KogamaSettingsCollectionBase *)this,
             (MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0x0;
  pKVar4[1].monitor = (MonitorData *)0x0;
  pcStack6 = this->klass[1]._0.name;
  pSStack7 = this;
  pKStack8 = pKVar4;
  (*this->klass[1]._0.gc_desc)();
  pAStack9 =
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
  ;
  pKVar4 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_UnableToEquipWeapons,1,(KogamaSettingsCollectionBase *)this,
             (MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0xffffffce;
  pKVar4[1].monitor = (MonitorData *)0x0;
  (*this->klass[1]._0.gc_desc)();
  pKVar4 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (pKVar4,StringLiteral_UnableToCollectModifierPickups,1,
             (KogamaSettingsCollectionBase *)this,(MethodInfo *)0x0);
  pKVar4[1].klass = (KogamaSettingBoolBase__Class *)0xffffffe2;
  pKVar4[1].monitor = (MonitorData *)0x0;
  pcStack10 = this->klass[1]._0.name;
  pSStack11 = this;
  pKStack12 = pKVar4;
  (*this->klass[1]._0.gc_desc)();
  return (KogamaSettingWrapperBase *)this;
}


/* KogamaSettingWrapperBase CreateHoverCraftPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateHoverCraftPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  pSVar1 = StringLiteral_HoverSettings;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this->fields).originalScale.x = (float)pHVar3;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)pDVar2);
  (this->fields).state = 0;
  (this->fields)._._._._.m_CachedPtr = pSVar1;
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
  pSVar1 = StringLiteral_HoverSubSettings;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this_00->fields).originalScale.x = (float)pHVar3;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)pDVar2)
  ;
  (this_00->fields).state = (int32_t)this;
  (this_00->fields)._._._._.m_CachedPtr = pSVar1;
  (*this->klass[1]._0.gc_desc)(this,this_00,this->klass[1]._0.name);
  pKVar4 = (KogamaSettingNumericBase_1_System_Int32___Class *)
           func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                           ,&stack0xfffffff0);
  this_01 = (KogamaSettingNumericBase_1_System_Int32_ *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                           );
  pSVar1 = StringLiteral_HoverSpeed;
  if (cRam_? == '\0') {
    pSVar1 = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (this_01,pSVar1,5,1,10,(KogamaSettingsCollectionBase *)this_00,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  this_01[1].klass = pKVar4;
  this_01[1].monitor = (MonitorData *)0x2;
  this_02 = (KogamaSettingBoolBase *)func_?();
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this_02,StringLiteral_HoverJump,(bool)this_02,(KogamaSettingsCollectionBase *)this_00,
             (MethodInfo *)0x0);
  this_02[1].klass = (KogamaSettingBoolBase__Class *)0x64;
  this_02[1].monitor = (MonitorData *)0x0;
  this_03 = (KogamaSettingEnumBase__Class *)func_?();
  pKVar5 = (KogamaSettingWrapperBase *)&UNK_?;
  pKVar6 = this_03;
  pMVar7 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__;
  pKVar8 = this_03;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  if (this_03 != (KogamaSettingEnumBase__Class *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)this_03,0,10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)this_03,1,100,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
    Dictionary_2_System_Int32_System_Int32__Add
              ((Dictionary_2_System_Int32_System_Int32_ *)this_03,2,1000,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    handle = 
    TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
    ;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar10 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar9,(MethodInfo *)0x0);
    pIVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                       ((IEnumerable *)pAVar10,
                        System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                       );
    min = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
                    ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
                      *)pIVar11,
                     MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                    );
    pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)
                        TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
                        ,(MethodInfo *)0x0);
    pAVar10 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar9,(MethodInfo *)0x0);
    pIVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                       ((IEnumerable *)pAVar10,
                        System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                       );
    max = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
                    ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
                      *)pIVar11,
                     MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                    );
    this_04 = (KogamaSettingEnumBase *)func_?();
    pMStack12 = pMVar7;
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
              (this_04,StringLiteral_RocketType,0,min,max,(KogamaSettingsCollectionBase *)this_00,
               (MethodInfo *)0x0);
    this_04[1].klass = pKVar8;
    this_04[1].monitor = (MonitorData *)0x2;
    pcStack13 = this_00->klass[1]._0.name;
    pSStack14 = this_00;
    pKStack15 = pKVar6;
    (*this_00->klass[1]._0.gc_desc)();
    pcStack16 = this_00->klass[1]._0.name;
    pSStack17 = this_00;
    (*this_00->klass[1]._0.gc_desc)();
    pcStack18 = this_00->klass[1]._0.name;
    pSStack19 = this_00;
    pKStack20 = this_04;
    (*this_00->klass[1]._0.gc_desc)();
    return pKVar5;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pKVar5 = (KogamaSettingWrapperBase *)(*pcVar21)();
  return pKVar5;
}


/* KogamaSettingWrapperBase GetRoot(AttributeSettingWoType) */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_GetRoot
          (AttributeSettingWoType__Enum attributeSettingWoType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  this = TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
         ->static_fields->attributeSettingRoots;
  if (this != (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
    pKVar1 = (KogamaSettingWrapperBase *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings
             ::AttributeSettingWoType,System::Object]::
             Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object_
                         *)this,attributeSettingWoType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_
                       );
    return pKVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar2)();
  return pKVar1;
}


/* AttributePrototypeSettingsManager() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePrototypeSettings::AttributePrototypeSettingsManager::
     AttributePrototypeSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
          *)func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  pKVar1 = AttributePrototypeSettingsManager_CreateAvatarPrototypes((MethodInfo *)0x0);
  if (this != (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::KogamaSettings::
    SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::
    AttributeSettingWoType,System::Object]::
    Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object__Add
              ((Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object_
                *)this,AttributeSettingWoType__Enum_Avatar,(Object *)pKVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    pKVar1 = AttributePrototypeSettingsManager_CreateHoverCraftPrototypes((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::KogamaSettings::
    SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::
    AttributeSettingWoType,System::Object]::
    Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object__Add
              ((Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_System_Object_
                *)this,AttributeSettingWoType__Enum_HoverCraft,(Object *)pKVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
    ->static_fields->attributeSettingRoots = this;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

