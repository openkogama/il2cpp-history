
/* KogamaSettingWrapperBase CreateAvatarPrototypes() */

KogamaSettingWrapperBase * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::AttributePrototypeSettingsManager_CreateAvatarPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APFloatCalcZeroValueLinear);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase);
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
  this = (KogamaSettingsCollectionBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase);
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor(this,StringLiteral_AvatarSettings,(KogamaSettingsCollectionBase *)0x0,(MethodInfo *)0x0);
    uStack_1 = 0x3f0000003f000000;
    uStack_2 = 100;
    pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear,&uStack_1);
    pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
    if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
      pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)StringLiteral_SuperSpeed;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
        cRam_? = '\x01';
      }
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_5,(Object *)0x64,(Object *)0x14,(Object *)0xc8,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
      pKVar4[1].klass = pKStack_3;
      func_?(pKVar4 + 1,pKStack_3);
      pKVar4[1].monitor = (MonitorData *)0x0;
      (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
      pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
      if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_DoubleJump,1,this,(MethodInfo *)0x0);
        pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x64;
        pKVar6[1].monitor = (MonitorData *)0x0;
        (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
        pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
        if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
          KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_EndlessAmmo,1,this,(MethodInfo *)0x0);
          pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x64;
          pKVar6[1].monitor = (MonitorData *)0x0;
          (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
          uStack_7 = 0x41a00000;
          uStack_8 = 0x3f0000003dcccccd;
          pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APFloatCalcZeroValueLinear,&uStack_8);
          this_00 = (KogamaSettingNumericBase_1_System_Single_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat);
          if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
            pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_OxygenSupply;
            if (cRam_? == '\0') {
              func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
              cRam_? = '\x01';
            }
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::KogamaSettingNumericBase_1_System_Single___ctor(this_00,(String *)pKStack_3,20.0,0.0,500.0,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
            this_00[1].klass = pKStack_5;
            func_?(this_00 + 1,pKStack_5);
            this_00[1].monitor = (MonitorData *)0x0;
            (*(this->klass->vtable).AddChild.methodPtr)(this,this_00,(this->klass->vtable).AddChild.method);
            uStack_9 = 0x3f8000003f000000;
            uStack_10 = 100;
            pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear,&uStack_9);
            pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
            if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
              pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_MaxHealth;
              if (cRam_? == '\0') {
                func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                cRam_? = '\x01';
              }
              KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_3,(Object *)0x64,(Object *)0x1,(Object *)0xc8,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
              pKVar4[1].klass = (KogamaSettingNumericBase_1_System_Object___Class *)pKStack_5;
              func_?(pKVar4 + 1,pKStack_5);
              pKVar4[1].monitor = (MonitorData *)0x0;
              (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
              uStack_11 = 0x40400000;
              pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear,&uStack_11);
              pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
              if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
                pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_DamageReduction;
                if (cRam_? == '\0') {
                  func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                  cRam_? = '\x01';
                }
                KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_3,(Object *)0x14,(Object *)0xa,(Object *)0x50,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                pKVar4[1].klass = (KogamaSettingNumericBase_1_System_Object___Class *)pKStack_5;
                func_?(pKVar4 + 1,pKStack_5);
                pKVar4[1].monitor = (MonitorData *)0x0;
                (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
                uStack_12 = 0x3f0000003f000000;
                uStack_13 = 100;
                pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcZeroValueLinear,&uStack_12);
                pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
                if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
                  pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_JumpHeight;
                  if (cRam_? == '\0') {
                    func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                    cRam_? = '\x01';
                  }
                  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_3,(Object *)0x64,(Object *)0x14,(Object *)0xc8,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                  pKVar4[1].klass = (KogamaSettingNumericBase_1_System_Object___Class *)pKStack_5;
                  func_?(pKVar4 + 1,pKStack_5);
                  pKVar4[1].monitor = (MonitorData *)0x0;
                  (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
                  uStack_14 = 0x3f000000;
                  pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear,&uStack_14);
                  pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
                  if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
                    pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_SlowFall;
                    if (cRam_? == '\0') {
                      func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                      cRam_? = '\x01';
                    }
                    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_3,(Object *)0x32,(Object *)0x14,(Object *)0x50,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                    pKVar4[1].klass = (KogamaSettingNumericBase_1_System_Object___Class *)pKStack_5;
                    func_?(pKVar4 + 1,pKStack_5);
                    pKVar4[1].monitor = (MonitorData *)0x0;
                    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
                    pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
                    if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
                      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_CanWallJumpAnySurface,1,this,(MethodInfo *)0x0);
                      pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x19;
                      pKVar6[1].monitor = (MonitorData *)0x0;
                      (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
                      uStack_15 = 0xbdcccccd;
                      pKStack_5 = (KogamaSettingNumericBase_1_System_Single___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear,&uStack_15);
                      pKVar4 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
                      if (pKVar4 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
                        pKStack_3 = (KogamaSettingNumericBase_1_System_Object___Class *)StringLiteral_FrictionMultiplier;
                        if (cRam_? == '\0') {
                          func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                          cRam_? = '\x01';
                        }
                        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(pKVar4,(String *)pKStack_3,(Object *)0x32,(Object *)0x19,(Object *)0x64,this,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
                        pKVar4[1].klass = (KogamaSettingNumericBase_1_System_Object___Class *)pKStack_5;
                        func_?(pKVar4 + 1,pKStack_5);
                        pKVar4[1].monitor = (MonitorData *)0x0;
                        (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar4,(this->klass->vtable).AddChild.method);
                        pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
                        if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
                          KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_BreathesWater,1,this,(MethodInfo *)0x0);
                          pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0x0;
                          pKVar6[1].monitor = (MonitorData *)0x0;
                          (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
                          pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
                          if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
                            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_UnableToEquipWeapons,1,this,(MethodInfo *)0x0);
                            pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0xffffffce;
                            pKVar6[1].monitor = (MonitorData *)0x0;
                            (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
                            pKVar6 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
                            if (pKVar6 != (KogamaSettingBoolBase *)0x0) {
                              KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(pKVar6,StringLiteral_UnableToCollectModifierPickups,1,this,(MethodInfo *)0x0);
                              pKVar6[1].klass = (KogamaSettingBoolBase__Class *)0xffffffe2;
                              pKVar6[1].monitor = (MonitorData *)0x0;
                              (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar6,(this->klass->vtable).AddChild.method);
                              return (KogamaSettingWrapperBase *)this;
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
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pKVar17 = (KogamaSettingWrapperBase *)(*pcVar16)();
  return pKVar17;
}


/* KogamaSettingWrapperBase CreateHoverCraftPrototypes() */

KogamaSettingWrapperBase * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::AttributePrototypeSettingsManager_CreateHoverCraftPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&TypeInfo__System__Enum);
    func_?(&System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_);
    func_?(&MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_);
    func_?(&MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase);
    func_?(&TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_HoverSpeed);
    func_?(&StringLiteral_HoverJump);
    func_?(&StringLiteral_RocketType);
    func_?(&StringLiteral_HoverSettings);
    func_?(&StringLiteral_HoverSubSettings);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase);
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor(this,StringLiteral_HoverSettings,(KogamaSettingsCollectionBase *)0x0,(MethodInfo *)0x0);
    this_00 = (KogamaSettingsCollectionBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase);
    if (this_00 != (KogamaSettingsCollectionBase *)0x0) {
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor(this_00,StringLiteral_HoverSubSettings,this,(MethodInfo *)0x0);
      (*(this->klass->vtable).AddChild.methodPtr)(this,this_00,(this->klass->vtable).AddChild.method);
      uStack_1 = 0x41200000;
      pKVar2 = (KogamaSettingNumericBase_1_System_Object___Class *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__APIntCalcLinear,&uStack_1);
      this_01 = (KogamaSettingNumericBase_1_System_Object_ *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt);
      key = StringLiteral_HoverSpeed;
      if (this_01 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
        if (cRam_? == '\0') {
          func_?(&MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
          cRam_? = '\x01';
        }
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor(this_01,key,(Object *)0x5,(Object *)0x1,(Object *)0xa,this_00,MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_);
        this_01[1].klass = pKVar2;
        func_?(this_01 + 1,pKVar2);
        this_01[1].monitor = (MonitorData *)0x2;
        this_02 = (KogamaSettingBoolBase *)func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool);
        if (this_02 != (KogamaSettingBoolBase *)0x0) {
          KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor(this_02,StringLiteral_HoverJump,1,this_00,(MethodInfo *)0x0);
          this_02[1].klass = (KogamaSettingBoolBase__Class *)0x64;
          this_02[1].monitor = (MonitorData *)0x0;
          this_03 = (KogamaSettingEnumBase__Class *)func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
          if (this_03 != (KogamaSettingEnumBase__Class *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor((ParameterOverride_1_System_Object_ *)this_03,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)0x0,(Object *)0xa,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)0x1,(Object *)0x64,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)0x2,(Object *)0x3e8,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
            handle = TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType;
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar3,(MethodInfo *)0x0);
            pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_3((IEnumerable *)pAVar4,System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_);
            min = System.Core.dll::System::Linq::Enumerable::Enumerable_Min(pIVar5,MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Min<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_);
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)TypeRef__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType,(MethodInfo *)0x0);
            pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar3,(MethodInfo *)0x0);
            pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_3((IEnumerable *)pAVar4,System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_MethodInfo__System__Linq__Enumerable__Cast<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__IEnumerable_);
            max = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1(pIVar5,MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__RocketType_MethodInfo__System__Linq__Enumerable__Max<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::RocketType>_);
            this_04 = (KogamaSettingEnumBase *)func_?();
            if (this_04 != (KogamaSettingEnumBase *)0x0) {
              KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor(this_04,StringLiteral_RocketType,0,min,max,this_00,(MethodInfo *)0x0);
              this_04[1].klass = this_03;
              func_?(this_04 + 1,this_03);
              this_04[1].monitor = (MonitorData *)0x2;
              (*(this_00->klass->vtable).AddChild.methodPtr)(this_00,this_01,(this_00->klass->vtable).AddChild.method);
              (*(this_00->klass->vtable).AddChild.methodPtr)(this_00,this_02,(this_00->klass->vtable).AddChild.method);
              (*(this_00->klass->vtable).AddChild.methodPtr)(this_00,this_04,(this_00->klass->vtable).AddChild.method);
              return (KogamaSettingWrapperBase *)this;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pKVar7 = (KogamaSettingWrapperBase *)(*pcVar6)();
  return pKVar7;
}


/* KogamaSettingWrapperBase GetRoot(AttributeSettingWoType) */

KogamaSettingWrapperBase * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::AttributePrototypeSettingsManager_GetRoot(AttributeSettingWoType__Enum attributeSettingWoType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager->static_fields->attributeSettingRoots;
  if (this != (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_ *)0x0) {
    pKVar1 = (KogamaSettingWrapperBase *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item((Dictionary_2_System_ByteEnum_System_Object_ *)this,attributeSettingWoType,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType_);
    return pKVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar3)();
  return pKVar1;
}


/* AttributePrototypeSettingsManager() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::AttributePrototypeSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>);
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor((ParameterOverride_1_System_Object_ *)this,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__);
    pKVar1 = AttributePrototypeSettingsManager_CreateAvatarPrototypes((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add(this,(Object *)0x0,(Object *)pKVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_);
    pKVar1 = AttributePrototypeSettingsManager_CreateHoverCraftPrototypes((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add(this,(Object *)0x1,(Object *)pKVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::AttributeSettingWoType,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributeSettingWoType__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_);
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager->static_fields->attributeSettingRoots = (Dictionary_2_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_AttributeSettingWoType_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_ *)this;
    func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager->static_fields,this);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

