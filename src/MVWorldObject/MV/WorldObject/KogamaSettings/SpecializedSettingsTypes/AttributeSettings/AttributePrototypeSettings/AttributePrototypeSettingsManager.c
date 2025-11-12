
/* KogamaSettingWrapperBase CreateAvatarPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateAvatarPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APFloatCalcZeroValueLinear
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnableToCollectModifierPickups);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DamageReduction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OxygenSupply);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxHealth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EndlessAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SlowFall);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FrictionMultiplier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoubleJump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SuperSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BreathesWater);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnableToEquipWeapons);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CanWallJumpAnySurface);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this,StringLiteral_AvatarSettings,(KogamaSettingsCollectionBase *)0x0,(MethodInfo *)0x0
            );
  uVar1 = _UNK_?;
  uStack_2 = CONCAT44(_UNK_?,_UNK_?);
  fStack_3 = 1.4013e-43;
  pIVar4 = (IAttributePointIntCalculator *)
           FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                         ,&uStack_2);
  pAVar5 = (AttributeSettingInt *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                        );
  AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
            (pAVar5,StringLiteral_SuperSpeed,100,0x14,200,pIVar4,
             AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_DoubleJump,1,this,(MethodInfo *)0x0);
    pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_EndlessAmmo,1,this,(MethodInfo *)0x0);
    pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    value = _UNK_?;
    uStack_2 = CONCAT44(uVar1,_UNK_?);
    fStack_3 = _UNK_?;
    calculator = (IAttributePointFloatCalculator *)
                 FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APFloatCalcZeroValueLinear
                               ,&uStack_2);
    this_00 = (AttributeSettingFloat *)
              FUN_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                           );
    AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
              (this_00,StringLiteral_OxygenSupply,value,0.0,_UNK_?,calculator,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,this_00,(this->klass->vtable).AddChild.method);
    uStack_2 = CONCAT44(_UNK_?,uVar1);
    fStack_3 = 1.4013e-43;
    pIVar4 = (IAttributePointIntCalculator *)
             FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                           ,&uStack_2);
    pAVar5 = (AttributeSettingInt *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (pAVar5,StringLiteral_MaxHealth,100,1,200,pIVar4,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    auStackX_10[0] = 0x40400000;
    pIVar4 = (IAttributePointIntCalculator *)
             FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                           ,auStackX_10);
    pAVar5 = (AttributeSettingInt *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (pAVar5,StringLiteral_DamageReduction,0x14,10,0x50,pIVar4,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    fStack_3 = 1.4013e-43;
    uStack_2 = CONCAT44(uVar1,uVar1);
    pIVar4 = (IAttributePointIntCalculator *)
             FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear
                           ,&uStack_2);
    pAVar5 = (AttributeSettingInt *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (pAVar5,StringLiteral_JumpHeight,100,0x14,200,pIVar4,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    auStackX_10[0] = 0x3f000000;
    pIVar4 = (IAttributePointIntCalculator *)
             FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                           ,auStackX_10);
    pAVar5 = (AttributeSettingInt *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (pAVar5,StringLiteral_SlowFall,0x32,0x14,0x50,pIVar4,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_CanWallJumpAnySurface,1,this,(MethodInfo *)0x0);
    pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x19;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    auStackX_10[0] = 0xbdcccccd;
    pIVar4 = (IAttributePointIntCalculator *)
             FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                           ,auStackX_10);
    pAVar5 = (AttributeSettingInt *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                          );
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (pAVar5,StringLiteral_FrictionMultiplier,0x32,0x19,100,pIVar4,
               AttributeSettingsExclusivityFlag__Enum_None,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).AddChild.methodPtr)(this,pAVar5,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_BreathesWater,1,this,(MethodInfo *)0x0);
    pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x0;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_UnableToEquipWeapons,1,this,(MethodInfo *)0x0);
    *(undefined4 *)&pKVar6[1].klass = 0xffffffce;
    *(undefined4 *)((longlong)&pKVar6[1].klass + 4) = 0;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    pKVar6 = (KogamaSettingBoolBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (pKVar6,StringLiteral_UnableToCollectModifierPickups,1,this,(MethodInfo *)0x0);
    *(undefined4 *)&pKVar6[1].klass = 0xffffffe2;
    *(undefined4 *)((longlong)&pKVar6[1].klass + 4) = 0;
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
    return (KogamaSettingWrapperBase *)this;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pKVar8 = (KogamaSettingWrapperBase *)(*pcVar7)();
  return pKVar8;
}


/* KogamaSettingWrapperBase CreateHoverCraftPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_CreateHoverCraftPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HoverSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HoverJump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RocketType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HoverSettings);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HoverSubSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this,StringLiteral_HoverSettings,(KogamaSettingsCollectionBase *)0x0,(MethodInfo *)0x0)
  ;
  this_00 = (KogamaSettingsCollectionBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                         );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this_00,StringLiteral_HoverSubSettings,this,(MethodInfo *)0x0);
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    (*(this->klass->vtable).AddChild.methodPtr)(this,this_00,(this->klass->vtable).AddChild.method);
    auStackX_10[0] = 0x41200000;
    calculator = (IAttributePointIntCalculator *)
                 FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear
                               ,auStackX_10);
    this_01 = (AttributeSettingInt *)
              FUN_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                           );
    plVar1 = (longlong *)0x0;
    AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
              (this_01,StringLiteral_HoverSpeed,5,1,10,calculator,
               AttributeSettingsExclusivityFlag__Enum_Jump,this_00,(MethodInfo *)0x0);
    this_02 = (KogamaSettingBoolBase *)
              FUN_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                           );
    pKVar2 = this_00;
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
              (this_02,StringLiteral_HoverJump,1,this_00,(MethodInfo *)0x0);
    this_02[1].klass = (KogamaSettingBoolBase__Class *)0x64;
    this_03 = (KogamaSettingEnumBase__Class *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    FUN_?(this_03);
    if (this_03 != (KogamaSettingEnumBase__Class *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)pKVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                ((Dictionary_2_System_Int32_System_Int32_ *)this_03,0,10,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                ((Dictionary_2_System_Int32_System_Int32_ *)this_03,1,100,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                ((Dictionary_2_System_Int32_System_Int32_ *)this_03,2,1000,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      pIVar4 = 
      TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
      ;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      plVar5 = plVar1;
      if (pIVar4 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar6 = FUN_?(pIVar4,1);
        plVar5 = (longlong *)FUN_?(lVar6 + 0x20);
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (plVar5 == (longlong *)0x0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar7 = (ArgumentNullException *)func_?(uVar3);
        pSVar8 = (String *)func_?(&StringLiteral_enumType);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar7,pSVar8,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
        FUN_?(pAVar7,uVar3);
        pcVar9 = (code *)swi(3);
        pKVar10 = (KogamaSettingWrapperBase *)(*pcVar9)();
        return pKVar10;
      }
      uVar3 = (**(code **)(*plVar5 + 0x888))(plVar5,*(undefined8 *)(*plVar5 + 0x890));
      pIVar11 = (IEnumerable_1_System_Int32Enum_ *)FUN_?(uVar3);
      min = System.Core.dll::System::Linq::Enumerable::Enumerable_Min_1
                      (pIVar11,
                       MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                      );
      pIVar4 = 
      TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
      ;
      if (TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType
          != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar6 = FUN_?(pIVar4,1);
        plVar1 = (longlong *)FUN_?(lVar6 + 0x20);
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (plVar1 == (longlong *)0x0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar7 = (ArgumentNullException *)func_?(uVar3);
        pSVar8 = (String *)func_?(&StringLiteral_enumType);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar7,pSVar8,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
        FUN_?(pAVar7,uVar3);
        pcVar9 = (code *)swi(3);
        pKVar10 = (KogamaSettingWrapperBase *)(*pcVar9)();
        return pKVar10;
      }
      uVar3 = (**(code **)(*plVar1 + 0x888))(plVar1,*(undefined8 *)(*plVar1 + 0x890));
      pIVar11 = (IEnumerable_1_System_Int32Enum_ *)FUN_?(uVar3);
      max = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
                      (pIVar11,
                       MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_
                      );
      this_04 = (KogamaSettingEnumBase *)
                FUN_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                             );
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                (this_04,StringLiteral_RocketType,0,min,max,this_00,(MethodInfo *)0x0);
      bVar12 = iRam_? != 0;
      this_04[1].klass = this_03;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)(this_04 + 1) >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar15 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      *(undefined4 *)&this_04[1].monitor = 2;
      if (this_00 != (KogamaSettingsCollectionBase *)0x0) {
        (*(this_00->klass->vtable).AddChild.methodPtr)
                  (this_00,this_01,(this_00->klass->vtable).AddChild.method);
        (*(this_00->klass->vtable).AddChild.methodPtr)
                  (this_00,this_02,(this_00->klass->vtable).AddChild.method);
        (*(this_00->klass->vtable).AddChild.methodPtr)
                  (this_00,this_04,(this_00->klass->vtable).AddChild.method);
        return (KogamaSettingWrapperBase *)this;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pKVar10 = (KogamaSettingWrapperBase *)(*pcVar9)();
  return pKVar10;
}


/* KogamaSettingWrapperBase GetRoot(AttributeSettingWoType) */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributePrototypeSettings::AttributePrototypeSettingsManager::
AttributePrototypeSettingsManager_GetRoot
          (AttributeSettingWoType__Enum attributeSettingWoType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
               ->_1).field_0x1c == 0) {
    FUN_?(
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_
  ;
  this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
            ->static_fields->attributeSettingRoots;
  if (this == (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pKVar3 = (KogamaSettingWrapperBase *)(*pcVar2)();
    return pKVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject
          ::RuntimeEvents::ExplosionEvent+ExplosionValues]::
          Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                    (this,attributeSettingWoType & 0xff,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pKVar3 = (KogamaSettingWrapperBase *)(*pcVar2)();
    return pKVar3;
  }
  pDVar6 = (this->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___Array
                 *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(KogamaSettingWrapperBase **)&pDVar6->vector[(int)uVar4].value.centerDamage;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pKVar3 = (KogamaSettingWrapperBase *)(*pcVar2)();
    return pKVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pKVar3 = (KogamaSettingWrapperBase *)(*pcVar2)();
  return pKVar3;
}


/* AttributePrototypeSettingsManager() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePrototypeSettings::AttributePrototypeSettingsManager::
     AttributePrototypeSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  pKVar1 = AttributePrototypeSettingsManager_CreateAvatarPrototypes((MethodInfo *)0x0);
  if (this == (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,0,(Object *)pKVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
             ->klass->rgctx_data[0x22].method);
  pKVar1 = AttributePrototypeSettingsManager_CreateHoverCraftPrototypes((MethodInfo *)0x0);
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),(Object *)pKVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),method_00);
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
  ->static_fields->attributeSettingRoots =
       (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   ->static_fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}

