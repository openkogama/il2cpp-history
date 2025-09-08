
/* AvatarModifierPackage AssembleInvulnerabilityPackage(AvatarModifierPackageType, Single) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::
AvatarModifierPackageFactory_AssembleInvulnerabilityPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum type,
          float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                   );
    cRam_? = '\x01';
  }
  avatarModifiers =
       (AvatarModifierPackage_AvatarModifier__Array *)
       func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,1);
  if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  pFVar1 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
  uVar2 = 2;
  uVar3 = 10;
  func_?(&stack0xfffffff8,pFVar1);
  if (avatarModifiers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if (avatarModifiers->max_length == 0) goto code_?;
    avatarModifiers->vector[0].avatarModifierType = uVar2;
    avatarModifiers->vector[0].avatarModifierEffect = uVar3;
    avatarModifiers->vector[0].value = pFVar1;
    func_?(&avatarModifiers->vector[0].value,0);
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]
      ::Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x11,1,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                );
      func_?(__return_storage_ptr__,0,0x44);
      AvatarModifierPackage::AvatarModifierPackage__ctor
                (__return_storage_ptr__,type,AvatarModifierPackageAdditionPolicy__Enum_Renew,time,
                 avatarModifiers,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)this,1,
                 (MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AvatarModifierPackage *)(*pcVar4)();
  return pAVar5;
}


/* Func`1[Single] Const(Single) */

Func_1_Single_ *
Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_Const
          (float c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<float>);
    func_?(&MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__);
    func_?(&TypeInfo__AvatarModifierPackageFactory____c__DisplayClass0_0);
    cRam_? = '\x01';
  }
  this = (UxmlObjectListAttributeDescription_1_System_Object_ *)
         func_?(TypeInfo__AvatarModifierPackageFactory____c__DisplayClass0_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this,(MethodInfo *)0x0);
  if (this != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)c;
    pFVar1 = (Func_1_Single_ *)func_?(TypeInfo__System__Func<float>);
    mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
              (pFVar1,(Object *)this,
               MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__,
               (MethodInfo *)0x0);
    return pFVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pFVar1 = (Func_1_Single_ *)(*pcVar2)();
  return pFVar1;
}


/* AvatarModifierPackage GetPackage(AvatarModifierPackageType) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum packageType
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                   );
    cRam_? = '\x01';
  }
  func_?(__return_storage_ptr__,0,0x44);
  if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)
         TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages;
  if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
    pAVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,AvatarModifierPackage]::
              Dictionary_2_System_Int32Enum_AvatarModifierPackage__get_Item
                        ((AvatarModifierPackage *)&puStack_2,this,packageType,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                        );
    iVar3 = (pAVar1->duration).currentCryptoKey;
    AVar4 = (pAVar1->duration).hiddenValue;
    pBVar5 = (pAVar1->duration).hiddenValueOld;
    fVar6 = (pAVar1->duration).fakeValue;
    bVar7 = (pAVar1->duration).inited;
    uVar8 = *(undefined3 *)&(pAVar1->duration).field_0x11;
    pAVar9 = pAVar1->avatarModifiers;
    pDVar10 = pAVar1->actionsToTakeVsTypes;
    iVar11 = (pAVar1->timeStamp).currentCryptoKey;
    AVar12 = (pAVar1->timeStamp).hiddenValue;
    pBVar13 = (pAVar1->timeStamp).hiddenValueOld;
    fVar14 = (pAVar1->timeStamp).fakeValue;
    bVar15 = (pAVar1->timeStamp).inited;
    uVar16 = *(undefined3 *)&(pAVar1->timeStamp).field_0x11;
    bVar17 = pAVar1->persistant;
    uVar18 = *(undefined3 *)&pAVar1->field_0x35;
    fVar19 = pAVar1->lastTimeStamp;
    iVar20 = pAVar1->avatarModifierPackageType;
    iVar21 = pAVar1->avatarModifierPackageAdditionPolicy;
    __return_storage_ptr__->id = pAVar1->id;
    (__return_storage_ptr__->duration).currentCryptoKey = iVar3;
    (__return_storage_ptr__->duration).hiddenValue = AVar4;
    (__return_storage_ptr__->duration).hiddenValueOld = pBVar5;
    (__return_storage_ptr__->duration).fakeValue = fVar6;
    (__return_storage_ptr__->duration).inited = bVar7;
    *(undefined3 *)&(__return_storage_ptr__->duration).field_0x11 = uVar8;
    __return_storage_ptr__->avatarModifiers = pAVar9;
    __return_storage_ptr__->actionsToTakeVsTypes = pDVar10;
    (__return_storage_ptr__->timeStamp).currentCryptoKey = iVar11;
    (__return_storage_ptr__->timeStamp).hiddenValue = AVar12;
    (__return_storage_ptr__->timeStamp).hiddenValueOld = pBVar13;
    (__return_storage_ptr__->timeStamp).fakeValue = fVar14;
    (__return_storage_ptr__->timeStamp).inited = bVar15;
    *(undefined3 *)&(__return_storage_ptr__->timeStamp).field_0x11 = uVar16;
    __return_storage_ptr__->persistant = bVar17;
    *(undefined3 *)&__return_storage_ptr__->field_0x35 = uVar18;
    __return_storage_ptr__->lastTimeStamp = fVar19;
    __return_storage_ptr__->avatarModifierPackageType = iVar20;
    __return_storage_ptr__->avatarModifierPackageAdditionPolicy = iVar21;
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AvatarModifierPackage::AvatarModifierPackage_Renew(__return_storage_ptr__,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar22 = (code *)swi(3);
  pAVar1 = (AvatarModifierPackage *)(*pcVar22)();
  return pAVar1;
}


/* AvatarModifierPackageFactory() */

void Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
            );
  pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
           func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,1);
  pFStack_2 = AvatarModifierPackageFactory_Const(10.0,(MethodInfo *)0x0);
  uStack_3 = 1;
  uStack_4 = 0xe;
  func_?(&pFStack_2,pFStack_2);
  if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if (pAVar1->max_length == 0) goto code_?;
    pAVar1->vector[0].avatarModifierType = uStack_3;
    pAVar1->vector[0].avatarModifierEffect = uStack_4;
    pAVar1->vector[0].value = pFStack_2;
    func_?(&pAVar1->vector[0].value);
    func_?(&AStack_5,0,0x44);
    AvatarModifierPackage::AvatarModifierPackage__ctor
              (&AStack_5,AvatarModifierPackageType__Enum_Fire,
               AvatarModifierPackageAdditionPolicy__Enum_Renew,1.0,pAVar1,
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
    if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
      value.duration.currentCryptoKey = AStack_5.duration.currentCryptoKey;
      value.id = AStack_5.id;
      value.duration.hiddenValue = AStack_5.duration.hiddenValue;
      value.duration.hiddenValueOld = AStack_5.duration.hiddenValueOld;
      value.duration.fakeValue = AStack_5.duration.fakeValue;
      value.duration.inited = AStack_5.duration.inited;
      value.duration._17_3_ = AStack_5.duration._17_3_;
      value.avatarModifiers = AStack_5.avatarModifiers;
      value.actionsToTakeVsTypes = AStack_5.actionsToTakeVsTypes;
      value.timeStamp.currentCryptoKey = AStack_5.timeStamp.currentCryptoKey;
      value.timeStamp.hiddenValue = AStack_5.timeStamp.hiddenValue;
      value.timeStamp.hiddenValueOld = AStack_5.timeStamp.hiddenValueOld;
      value.timeStamp.fakeValue = AStack_5.timeStamp.fakeValue;
      value.timeStamp.inited = AStack_5.timeStamp.inited;
      value.timeStamp._17_3_ = AStack_5.timeStamp._17_3_;
      value.persistant = AStack_5.persistant;
      value._53_3_ = AStack_5._53_3_;
      value.lastTimeStamp = AStack_5.lastTimeStamp;
      value.avatarModifierPackageType = AStack_5.avatarModifierPackageType;
      value.avatarModifierPackageAdditionPolicy = AStack_5.avatarModifierPackageAdditionPolicy;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                (this,1,value,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                );
      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
               func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
      AVar6 = (ACTkByte4)AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
      AVar7 = (ACTkByte4)&AStack_8;
      uStack_9 = 0;
      uStack_10 = 2;
      AStack_8 = AVar6;
      func_?();
      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
        if (pAVar1->max_length == 0) goto code_?;
        pAVar1->vector[0].avatarModifierType = uStack_9;
        pAVar1->vector[0].avatarModifierEffect = uStack_10;
        pAVar1->vector[0].value = (Func_1_Single_ *)AStack_8;
        func_?(&pAVar1->vector[0].value);
        pFStack_11 = AvatarModifierPackageFactory_Const(1.25,(MethodInfo *)0x0);
        uStack_12 = 0;
        uStack_13 = 3;
        func_?(&pFStack_11);
        if (pAVar1->max_length < 2) goto code_?;
        pAVar1->vector[1].avatarModifierType = uStack_12;
        pAVar1->vector[1].avatarModifierEffect = uStack_13;
        pAVar1->vector[1].value = pFStack_11;
        func_?(&pAVar1->vector[1].value);
        pFStack_14 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        uStack_15 = 2;
        uStack_16 = 7;
        func_?(&pFStack_14);
        if (pAVar1->max_length < 3) goto code_?;
        pAVar1->vector[2].avatarModifierType = uStack_15;
        pAVar1->vector[2].avatarModifierEffect = uStack_16;
        pAVar1->vector[2].value = pFStack_14;
        func_?(&pAVar1->vector[2].value);
        pFStack_17 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        uStack_18 = 2;
        uStack_19 = 9;
        func_?(&pFStack_17);
        if (pAVar1->max_length < 4) goto code_?;
        pAVar1->vector[3].avatarModifierType = uStack_18;
        pAVar1->vector[3].avatarModifierEffect = uStack_19;
        pAVar1->vector[3].value = pFStack_17;
        func_?(&pAVar1->vector[3].value);
        pFStack_20 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        uStack_21 = 2;
        uStack_22 = 0xb;
        func_?(&pFStack_20);
        if (pAVar1->max_length < 5) goto code_?;
        pAVar1->vector[4].avatarModifierType = uStack_21;
        pAVar1->vector[4].avatarModifierEffect = uStack_22;
        pAVar1->vector[4].value = pFStack_20;
        func_?(&pAVar1->vector[4].value);
        pFStack_23 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        uStack_24 = 2;
        uStack_25 = 10;
        func_?(&pFStack_23);
        if (pAVar1->max_length < 6) goto code_?;
        pAVar1->vector[5].avatarModifierType = uStack_24;
        pAVar1->vector[5].avatarModifierEffect = uStack_25;
        pAVar1->vector[5].value = pFStack_23;
        func_?(&pAVar1->vector[5].value);
        func_?(&AStack_26,0,0x44);
        AvatarModifierPackage::AvatarModifierPackage__ctor
                  (&AStack_26,AvatarModifierPackageType__Enum_Mutant,
                   AvatarModifierPackageAdditionPolicy__Enum_Renew,20.0,pAVar1,
                   (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                   (MethodInfo *)0x0);
        value_00.duration.currentCryptoKey = AStack_26.duration.currentCryptoKey;
        value_00.id = AStack_26.id;
        value_00.duration.hiddenValue = AStack_26.duration.hiddenValue;
        value_00.duration.hiddenValueOld = AStack_26.duration.hiddenValueOld;
        value_00.duration.fakeValue = AStack_26.duration.fakeValue;
        value_00.duration.inited = AStack_26.duration.inited;
        value_00.duration._17_3_ = AStack_26.duration._17_3_;
        value_00.avatarModifiers = AStack_26.avatarModifiers;
        value_00.actionsToTakeVsTypes = AStack_26.actionsToTakeVsTypes;
        value_00.timeStamp.currentCryptoKey = AStack_26.timeStamp.currentCryptoKey;
        value_00.timeStamp.hiddenValue = AStack_26.timeStamp.hiddenValue;
        value_00.timeStamp.hiddenValueOld = AStack_26.timeStamp.hiddenValueOld;
        value_00.timeStamp.fakeValue = AStack_26.timeStamp.fakeValue;
        value_00.timeStamp.inited = AStack_26.timeStamp.inited;
        value_00.timeStamp._17_3_ = AStack_26.timeStamp._17_3_;
        value_00.persistant = AStack_26.persistant;
        value_00._53_3_ = AStack_26._53_3_;
        value_00.lastTimeStamp = AStack_26.lastTimeStamp;
        value_00.avatarModifierPackageType = AStack_26.avatarModifierPackageType;
        value_00.avatarModifierPackageAdditionPolicy =
             AStack_26.avatarModifierPackageAdditionPolicy;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                  (this,2,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                  );
        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
        pFStack_27 = AvatarModifierPackageFactory_Const(0.01,(MethodInfo *)0x0);
        uStack_28 = 0;
        uStack_29 = 2;
        func_?();
        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
          if (pAVar1->max_length == 0) goto code_?;
          pAVar1->vector[0].avatarModifierType = uStack_28;
          pAVar1->vector[0].avatarModifierEffect = uStack_29;
          pAVar1->vector[0].value = pFStack_27;
          func_?(&pAVar1->vector[0].value);
          pFStack_30 = AvatarModifierPackageFactory_Const(0.03,(MethodInfo *)0x0);
          uStack_31 = 0;
          uStack_32 = 3;
          func_?(&pFStack_30);
          if (pAVar1->max_length < 2) goto code_?;
          pAVar1->vector[1].avatarModifierType = uStack_31;
          pAVar1->vector[1].avatarModifierEffect = uStack_32;
          pAVar1->vector[1].value = pFStack_30;
          func_?(&pAVar1->vector[1].value);
          pFStack_33 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
          uStack_34 = 2;
          uStack_35 = 0xc;
          func_?(&pFStack_33);
          if (pAVar1->max_length < 3) goto code_?;
          pAVar1->vector[2].avatarModifierType = uStack_34;
          pAVar1->vector[2].avatarModifierEffect = uStack_35;
          pAVar1->vector[2].value = pFStack_33;
          func_?(&pAVar1->vector[2].value);
          func_?(&AStack_36,0,0x44);
          AvatarModifierPackage::AvatarModifierPackage__ctor
                    (&AStack_36,AvatarModifierPackageType__Enum_Sticky,
                     AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                     (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                     (MethodInfo *)0x0);
          value_01.duration.currentCryptoKey = AStack_36.duration.currentCryptoKey;
          value_01.id = AStack_36.id;
          value_01.duration.hiddenValue = AStack_36.duration.hiddenValue;
          value_01.duration.hiddenValueOld = AStack_36.duration.hiddenValueOld;
          value_01.duration.fakeValue = AStack_36.duration.fakeValue;
          value_01.duration.inited = AStack_36.duration.inited;
          value_01.duration._17_3_ = AStack_36.duration._17_3_;
          value_01.avatarModifiers = AStack_36.avatarModifiers;
          value_01.actionsToTakeVsTypes = AStack_36.actionsToTakeVsTypes;
          value_01.timeStamp.currentCryptoKey = AStack_36.timeStamp.currentCryptoKey;
          value_01.timeStamp.hiddenValue = AStack_36.timeStamp.hiddenValue;
          value_01.timeStamp.hiddenValueOld = AStack_36.timeStamp.hiddenValueOld;
          value_01.timeStamp.fakeValue = AStack_36.timeStamp.fakeValue;
          value_01.timeStamp.inited = AStack_36.timeStamp.inited;
          value_01.timeStamp._17_3_ = AStack_36.timeStamp._17_3_;
          value_01.persistant = AStack_36.persistant;
          value_01._53_3_ = AStack_36._53_3_;
          value_01.lastTimeStamp = AStack_36.lastTimeStamp;
          value_01.avatarModifierPackageType = AStack_36.avatarModifierPackageType;
          value_01.avatarModifierPackageAdditionPolicy =
               AStack_36.avatarModifierPackageAdditionPolicy;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                    (this,3,value_01,
                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                    );
          pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
          pFStack_37 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
          uStack_38 = 0;
          uStack_39 = 2;
          func_?();
          if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
            if (pAVar1->max_length == 0) goto code_?;
            pAVar1->vector[0].avatarModifierType = uStack_38;
            pAVar1->vector[0].avatarModifierEffect = uStack_39;
            pAVar1->vector[0].value = pFStack_37;
            func_?(&pAVar1->vector[0].value);
            pFStack_40 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
            uStack_41 = 0;
            uStack_42 = 3;
            func_?(&pFStack_40);
            if (pAVar1->max_length < 2) goto code_?;
            pAVar1->vector[1].avatarModifierType = uStack_41;
            pAVar1->vector[1].avatarModifierEffect = uStack_42;
            pAVar1->vector[1].value = pFStack_40;
            func_?(&pAVar1->vector[1].value);
            func_?(&AStack_43,0,0x44);
            AvatarModifierPackage::AvatarModifierPackage__ctor
                      (&AStack_43,AvatarModifierPackageType__Enum_SlowMat,
                       AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                       (MethodInfo *)0x0);
            value_02.duration.currentCryptoKey = AStack_43.duration.currentCryptoKey;
            value_02.id = AStack_43.id;
            value_02.duration.hiddenValue = AStack_43.duration.hiddenValue;
            value_02.duration.hiddenValueOld = AStack_43.duration.hiddenValueOld;
            value_02.duration.fakeValue = AStack_43.duration.fakeValue;
            value_02.duration.inited = AStack_43.duration.inited;
            value_02.duration._17_3_ = AStack_43.duration._17_3_;
            value_02.avatarModifiers = AStack_43.avatarModifiers;
            value_02.actionsToTakeVsTypes = AStack_43.actionsToTakeVsTypes;
            value_02.timeStamp.currentCryptoKey = AStack_43.timeStamp.currentCryptoKey;
            value_02.timeStamp.hiddenValue = AStack_43.timeStamp.hiddenValue;
            value_02.timeStamp.hiddenValueOld = AStack_43.timeStamp.hiddenValueOld;
            value_02.timeStamp.fakeValue = AStack_43.timeStamp.fakeValue;
            value_02.timeStamp.inited = AStack_43.timeStamp.inited;
            value_02.timeStamp._17_3_ = AStack_43.timeStamp._17_3_;
            value_02.persistant = AStack_43.persistant;
            value_02._53_3_ = AStack_43._53_3_;
            value_02.lastTimeStamp = AStack_43.lastTimeStamp;
            value_02.avatarModifierPackageType = AStack_43.avatarModifierPackageType;
            value_02.avatarModifierPackageAdditionPolicy =
                 AStack_43.avatarModifierPackageAdditionPolicy;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,AvatarModifierPackage]::
            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                      (this,0x16,value_02,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                      );
            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
            pFStack_44 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
            uStack_45 = 0;
            uStack_46 = 3;
            func_?();
            if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
              if (pAVar1->max_length == 0) goto code_?;
              pAVar1->vector[0].avatarModifierType = uStack_45;
              pAVar1->vector[0].avatarModifierEffect = uStack_46;
              pAVar1->vector[0].value = pFStack_44;
              func_?(&pAVar1->vector[0].value);
              pFStack_47 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
              uStack_48 = 0;
              uStack_49 = 0x14;
              func_?(&pFStack_47);
              if (pAVar1->max_length < 2) goto code_?;
              pAVar1->vector[1].avatarModifierType = uStack_48;
              pAVar1->vector[1].avatarModifierEffect = uStack_49;
              pAVar1->vector[1].value = pFStack_47;
              func_?(&pAVar1->vector[1].value);
              func_?(&AStack_50,0,0x44);
              AvatarModifierPackage::AvatarModifierPackage__ctor
                        (&AStack_50,AvatarModifierPackageType__Enum_SpeedMat,
                         AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                         (MethodInfo *)0x0);
              value_03.duration.currentCryptoKey = AStack_50.duration.currentCryptoKey;
              value_03.id = AStack_50.id;
              value_03.duration.hiddenValue = AStack_50.duration.hiddenValue;
              value_03.duration.hiddenValueOld = AStack_50.duration.hiddenValueOld;
              value_03.duration.fakeValue = AStack_50.duration.fakeValue;
              value_03.duration.inited = AStack_50.duration.inited;
              value_03.duration._17_3_ = AStack_50.duration._17_3_;
              value_03.avatarModifiers = AStack_50.avatarModifiers;
              value_03.actionsToTakeVsTypes = AStack_50.actionsToTakeVsTypes;
              value_03.timeStamp.currentCryptoKey = AStack_50.timeStamp.currentCryptoKey;
              value_03.timeStamp.hiddenValue = AStack_50.timeStamp.hiddenValue;
              value_03.timeStamp.hiddenValueOld = AStack_50.timeStamp.hiddenValueOld;
              value_03.timeStamp.fakeValue = AStack_50.timeStamp.fakeValue;
              value_03.timeStamp.inited = AStack_50.timeStamp.inited;
              value_03.timeStamp._17_3_ = AStack_50.timeStamp._17_3_;
              value_03.persistant = AStack_50.persistant;
              value_03._53_3_ = AStack_50._53_3_;
              value_03.lastTimeStamp = AStack_50.lastTimeStamp;
              value_03.avatarModifierPackageType = AStack_50.avatarModifierPackageType;
              value_03.avatarModifierPackageAdditionPolicy =
                   AStack_50.avatarModifierPackageAdditionPolicy;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,AvatarModifierPackage]::
              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                        (this,0x17,value_03,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                        );
              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
              pFStack_51 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
              uStack_52 = 2;
              uStack_53 = 0x1b;
              func_?();
              if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                if (pAVar1->max_length == 0) goto code_?;
                pAVar1->vector[0].avatarModifierType = uStack_52;
                pAVar1->vector[0].avatarModifierEffect = uStack_53;
                pAVar1->vector[0].value = pFStack_51;
                func_?(&pAVar1->vector[0].value);
                func_?(&AStack_54,0,0x44);
                AvatarModifierPackage::AvatarModifierPackage__ctor
                          (&AStack_54,AvatarModifierPackageType__Enum_CrumbleMat,
                           AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                           (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                           (MethodInfo *)0x0);
                value_04.duration.currentCryptoKey = AStack_54.duration.currentCryptoKey;
                value_04.id = AStack_54.id;
                value_04.duration.hiddenValue = AStack_54.duration.hiddenValue;
                value_04.duration.hiddenValueOld = AStack_54.duration.hiddenValueOld;
                value_04.duration.fakeValue = AStack_54.duration.fakeValue;
                value_04.duration.inited = AStack_54.duration.inited;
                value_04.duration._17_3_ = AStack_54.duration._17_3_;
                value_04.avatarModifiers = AStack_54.avatarModifiers;
                value_04.actionsToTakeVsTypes = AStack_54.actionsToTakeVsTypes;
                value_04.timeStamp.currentCryptoKey = AStack_54.timeStamp.currentCryptoKey;
                value_04.timeStamp.hiddenValue = AStack_54.timeStamp.hiddenValue;
                value_04.timeStamp.hiddenValueOld = AStack_54.timeStamp.hiddenValueOld;
                value_04.timeStamp.fakeValue = AStack_54.timeStamp.fakeValue;
                value_04.timeStamp.inited = AStack_54.timeStamp.inited;
                value_04.timeStamp._17_3_ = AStack_54.timeStamp._17_3_;
                value_04.persistant = AStack_54.persistant;
                value_04._53_3_ = AStack_54._53_3_;
                value_04.lastTimeStamp = AStack_54.lastTimeStamp;
                value_04.avatarModifierPackageType = AStack_54.avatarModifierPackageType;
                value_04.avatarModifierPackageAdditionPolicy =
                     AStack_54.avatarModifierPackageAdditionPolicy;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,AvatarModifierPackage]::
                Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                          (this,0x18,value_04,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                          );
                pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                pFStack_55 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
                uStack_56 = 1;
                uStack_57 = 0x16;
                func_?();
                if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                  if (pAVar1->max_length == 0) goto code_?;
                  pAVar1->vector[0].avatarModifierType = uStack_56;
                  pAVar1->vector[0].avatarModifierEffect = uStack_57;
                  pAVar1->vector[0].value = pFStack_55;
                  func_?(&pAVar1->vector[0].value);
                  func_?(&AStack_58,0,0x44);
                  AvatarModifierPackage::AvatarModifierPackage__ctor
                            (&AStack_58,AvatarModifierPackageType__Enum_Poison,
                             AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1,
                             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                             (MethodInfo *)0x0);
                  value_05.duration.currentCryptoKey = AStack_58.duration.currentCryptoKey;
                  value_05.id = AStack_58.id;
                  value_05.duration.hiddenValue = AStack_58.duration.hiddenValue;
                  value_05.duration.hiddenValueOld = AStack_58.duration.hiddenValueOld;
                  value_05.duration.fakeValue = AStack_58.duration.fakeValue;
                  value_05.duration.inited = AStack_58.duration.inited;
                  value_05.duration._17_3_ = AStack_58.duration._17_3_;
                  value_05.avatarModifiers = AStack_58.avatarModifiers;
                  value_05.actionsToTakeVsTypes = AStack_58.actionsToTakeVsTypes;
                  value_05.timeStamp.currentCryptoKey = AStack_58.timeStamp.currentCryptoKey;
                  value_05.timeStamp.hiddenValue = AStack_58.timeStamp.hiddenValue;
                  value_05.timeStamp.hiddenValueOld = AStack_58.timeStamp.hiddenValueOld;
                  value_05.timeStamp.fakeValue = AStack_58.timeStamp.fakeValue;
                  value_05.timeStamp.inited = AStack_58.timeStamp.inited;
                  value_05.timeStamp._17_3_ = AStack_58.timeStamp._17_3_;
                  value_05.persistant = AStack_58.persistant;
                  value_05._53_3_ = AStack_58._53_3_;
                  value_05.lastTimeStamp = AStack_58.lastTimeStamp;
                  value_05.avatarModifierPackageType = AStack_58.avatarModifierPackageType;
                  value_05.avatarModifierPackageAdditionPolicy =
                       AStack_58.avatarModifierPackageAdditionPolicy;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32Enum,AvatarModifierPackage]::
                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                            (this,4,value_05,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                            );
                  pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                  pFStack_59 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                  uStack_60 = 1;
                  uStack_61 = 0xf;
                  func_?();
                  if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                    if (pAVar1->max_length == 0) goto code_?;
                    pAVar1->vector[0].avatarModifierType = uStack_60;
                    pAVar1->vector[0].avatarModifierEffect = uStack_61;
                    pAVar1->vector[0].value = pFStack_59;
                    func_?(&pAVar1->vector[0].value);
                    pFStack_62 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                    uStack_63 = 1;
                    uStack_64 = 0x15;
                    func_?(&pFStack_62);
                    if (pAVar1->max_length < 2) goto code_?;
                    pAVar1->vector[1].avatarModifierType = uStack_63;
                    pAVar1->vector[1].avatarModifierEffect = uStack_64;
                    pAVar1->vector[1].value = pFStack_62;
                    func_?(&pAVar1->vector[1].value);
                    pDVar65 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                              *)func_?(
                                               TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                               );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                              (pDVar65,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                              );
                    if (pDVar65 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                   *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Int32Enum]::
                      Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar65,4,2,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                );
                      func_?(&AStack_66,0);
                      AvatarModifierPackage::AvatarModifierPackage__ctor
                                (&AStack_66,AvatarModifierPackageType__Enum_HealingMat,
                                 AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar65,0
                                 ,(MethodInfo *)0x0);
                      value_19.duration.currentCryptoKey = AStack_66.duration.currentCryptoKey;
                      value_19.id = AStack_66.id;
                      value_19.duration.hiddenValue = AStack_66.duration.hiddenValue;
                      value_19.duration.hiddenValueOld = AStack_66.duration.hiddenValueOld;
                      value_19.duration.fakeValue = AStack_66.duration.fakeValue;
                      value_19.duration.inited = AStack_66.duration.inited;
                      value_19.duration._17_3_ = AStack_66.duration._17_3_;
                      value_19.avatarModifiers = AStack_66.avatarModifiers;
                      value_19.actionsToTakeVsTypes = AStack_66.actionsToTakeVsTypes;
                      value_19.timeStamp.currentCryptoKey = AStack_66.timeStamp.currentCryptoKey;
                      value_19.timeStamp.hiddenValue = AStack_66.timeStamp.hiddenValue;
                      value_19.timeStamp.hiddenValueOld = AStack_66.timeStamp.hiddenValueOld;
                      value_19.timeStamp.fakeValue = AStack_66.timeStamp.fakeValue;
                      value_19.timeStamp.inited = AStack_66.timeStamp.inited;
                      value_19.timeStamp._17_3_ = AStack_66.timeStamp._17_3_;
                      value_19.persistant = AStack_66.persistant;
                      value_19._53_3_ = AStack_66._53_3_;
                      value_19.lastTimeStamp = AStack_66.lastTimeStamp;
                      value_19.avatarModifierPackageType = AStack_66.avatarModifierPackageType;
                      value_19.avatarModifierPackageAdditionPolicy =
                           AStack_66.avatarModifierPackageAdditionPolicy;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,AvatarModifierPackage]::
                      Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                (this,0x15,value_19,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                );
                      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                      pFStack_67 = AvatarModifierPackageFactory_Const(500.0,(MethodInfo *)0x0);
                      uStack_68 = 1;
                      uStack_69 = 0x17;
                      func_?();
                      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                        if (pAVar1->max_length == 0) goto code_?;
                        pAVar1->vector[0].avatarModifierType = uStack_68;
                        pAVar1->vector[0].avatarModifierEffect = uStack_69;
                        pAVar1->vector[0].value = pFStack_67;
                        func_?(&pAVar1->vector[0].value);
                        func_?(&AStack_70,0,0x44);
                        AvatarModifierPackage::AvatarModifierPackage__ctor
                                  (&AStack_70,AvatarModifierPackageType__Enum_Lethal,
                                   AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1,
                                   (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                                   (MethodInfo *)0x0);
                        value_06.duration.currentCryptoKey = AStack_70.duration.currentCryptoKey;
                        value_06.id = AStack_70.id;
                        value_06.duration.hiddenValue = AStack_70.duration.hiddenValue;
                        value_06.duration.hiddenValueOld = AStack_70.duration.hiddenValueOld;
                        value_06.duration.fakeValue = AStack_70.duration.fakeValue;
                        value_06.duration.inited = AStack_70.duration.inited;
                        value_06.duration._17_3_ = AStack_70.duration._17_3_;
                        value_06.avatarModifiers = AStack_70.avatarModifiers;
                        value_06.actionsToTakeVsTypes = AStack_70.actionsToTakeVsTypes;
                        value_06.timeStamp.currentCryptoKey = AStack_70.timeStamp.currentCryptoKey;
                        value_06.timeStamp.hiddenValue = AStack_70.timeStamp.hiddenValue;
                        value_06.timeStamp.hiddenValueOld = AStack_70.timeStamp.hiddenValueOld;
                        value_06.timeStamp.fakeValue = AStack_70.timeStamp.fakeValue;
                        value_06.timeStamp.inited = AStack_70.timeStamp.inited;
                        value_06.timeStamp._17_3_ = AStack_70.timeStamp._17_3_;
                        value_06.persistant = AStack_70.persistant;
                        value_06._53_3_ = AStack_70._53_3_;
                        value_06.lastTimeStamp = AStack_70.lastTimeStamp;
                        value_06.avatarModifierPackageType = AStack_70.avatarModifierPackageType;
                        value_06.avatarModifierPackageAdditionPolicy =
                             AStack_70.avatarModifierPackageAdditionPolicy;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,AvatarModifierPackage]::
                        Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                  (this,0x14,value_06,
                                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                  );
                        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                        pFStack_71 = AvatarModifierPackageFactory_Const(150.0,(MethodInfo *)0x0);
                        uStack_72 = 1;
                        uStack_73 = 0xe;
                        func_?();
                        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                          if (pAVar1->max_length == 0) goto code_?;
                          pAVar1->vector[0].avatarModifierType = uStack_72;
                          pAVar1->vector[0].avatarModifierEffect = uStack_73;
                          pAVar1->vector[0].value = pFStack_71;
                          func_?(&pAVar1->vector[0].value);
                          func_?(&AStack_74,0,0x44);
                          AvatarModifierPackage::AvatarModifierPackage__ctor
                                    (&AStack_74,AvatarModifierPackageType__Enum_InstantDeath,
                                     AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1
                                     ,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0
                                     ,0,(MethodInfo *)0x0);
                          value_07.duration.currentCryptoKey = AStack_74.duration.currentCryptoKey;
                          value_07.id = AStack_74.id;
                          value_07.duration.hiddenValue = AStack_74.duration.hiddenValue;
                          value_07.duration.hiddenValueOld = AStack_74.duration.hiddenValueOld;
                          value_07.duration.fakeValue = AStack_74.duration.fakeValue;
                          value_07.duration.inited = AStack_74.duration.inited;
                          value_07.duration._17_3_ = AStack_74.duration._17_3_;
                          value_07.avatarModifiers = AStack_74.avatarModifiers;
                          value_07.actionsToTakeVsTypes = AStack_74.actionsToTakeVsTypes;
                          value_07.timeStamp.currentCryptoKey =
                               AStack_74.timeStamp.currentCryptoKey;
                          value_07.timeStamp.hiddenValue = AStack_74.timeStamp.hiddenValue;
                          value_07.timeStamp.hiddenValueOld = AStack_74.timeStamp.hiddenValueOld;
                          value_07.timeStamp.fakeValue = AStack_74.timeStamp.fakeValue;
                          value_07.timeStamp.inited = AStack_74.timeStamp.inited;
                          value_07.timeStamp._17_3_ = AStack_74.timeStamp._17_3_;
                          value_07.persistant = AStack_74.persistant;
                          value_07._53_3_ = AStack_74._53_3_;
                          value_07.lastTimeStamp = AStack_74.lastTimeStamp;
                          value_07.avatarModifierPackageType = AStack_74.avatarModifierPackageType;
                          value_07.avatarModifierPackageAdditionPolicy =
                               AStack_74.avatarModifierPackageAdditionPolicy;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,AvatarModifierPackage]::
                          Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                    (this,6,value_07,
                                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                    );
                          pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                          pFStack_75 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                          uStack_76 = 2;
                          uStack_77 = 0x12;
                          func_?();
                          if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                            if (pAVar1->max_length == 0) goto code_?;
                            pAVar1->vector[0].avatarModifierType = uStack_76;
                            pAVar1->vector[0].avatarModifierEffect = uStack_77;
                            pAVar1->vector[0].value = pFStack_75;
                            func_?(&pAVar1->vector[0].value);
                            func_?(&AStack_78,0,0x44);
                            AvatarModifierPackage::AvatarModifierPackage__ctor
                                      (&AStack_78,AvatarModifierPackageType__Enum_WallJump,
                                       AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar1,
                                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                       0x0,0,(MethodInfo *)0x0);
                            value_08.duration.currentCryptoKey =
                                 AStack_78.duration.currentCryptoKey;
                            value_08.id = AStack_78.id;
                            value_08.duration.hiddenValue = AStack_78.duration.hiddenValue;
                            value_08.duration.hiddenValueOld = AStack_78.duration.hiddenValueOld;
                            value_08.duration.fakeValue = AStack_78.duration.fakeValue;
                            value_08.duration.inited = AStack_78.duration.inited;
                            value_08.duration._17_3_ = AStack_78.duration._17_3_;
                            value_08.avatarModifiers = AStack_78.avatarModifiers;
                            value_08.actionsToTakeVsTypes = AStack_78.actionsToTakeVsTypes;
                            value_08.timeStamp.currentCryptoKey =
                                 AStack_78.timeStamp.currentCryptoKey;
                            value_08.timeStamp.hiddenValue = AStack_78.timeStamp.hiddenValue;
                            value_08.timeStamp.hiddenValueOld = AStack_78.timeStamp.hiddenValueOld;
                            value_08.timeStamp.fakeValue = AStack_78.timeStamp.fakeValue;
                            value_08.timeStamp.inited = AStack_78.timeStamp.inited;
                            value_08.timeStamp._17_3_ = AStack_78.timeStamp._17_3_;
                            value_08.persistant = AStack_78.persistant;
                            value_08._53_3_ = AStack_78._53_3_;
                            value_08.lastTimeStamp = AStack_78.lastTimeStamp;
                            value_08.avatarModifierPackageType =
                                 AStack_78.avatarModifierPackageType;
                            value_08.avatarModifierPackageAdditionPolicy =
                                 AStack_78.avatarModifierPackageAdditionPolicy;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,AvatarModifierPackage]::
                            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                      (this,5,value_08,
                                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                      );
                            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                     func_?();
                            pFStack_79 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
                            uStack_80 = 2;
                            uStack_81 = 0xc;
                            func_?();
                            if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                              if (pAVar1->max_length == 0) goto code_?;
                              pAVar1->vector[0].avatarModifierType = uStack_80;
                              pAVar1->vector[0].avatarModifierEffect = uStack_81;
                              pAVar1->vector[0].value = pFStack_79;
                              func_?(&pAVar1->vector[0].value);
                              func_?(&AStack_82,0,0x44);
                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                        (&AStack_82,AvatarModifierPackageType__Enum_NoFriction,
                                         AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar1,
                                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                         0x0,0,(MethodInfo *)0x0);
                              value_09.duration.currentCryptoKey =
                                   AStack_82.duration.currentCryptoKey;
                              value_09.id = AStack_82.id;
                              value_09.duration.hiddenValue = AStack_82.duration.hiddenValue;
                              value_09.duration.hiddenValueOld = AStack_82.duration.hiddenValueOld;
                              value_09.duration.fakeValue = AStack_82.duration.fakeValue;
                              value_09.duration.inited = AStack_82.duration.inited;
                              value_09.duration._17_3_ = AStack_82.duration._17_3_;
                              value_09.avatarModifiers = AStack_82.avatarModifiers;
                              value_09.actionsToTakeVsTypes = AStack_82.actionsToTakeVsTypes;
                              value_09.timeStamp.currentCryptoKey =
                                   AStack_82.timeStamp.currentCryptoKey;
                              value_09.timeStamp.hiddenValue = AStack_82.timeStamp.hiddenValue;
                              value_09.timeStamp.hiddenValueOld =
                                   AStack_82.timeStamp.hiddenValueOld;
                              value_09.timeStamp.fakeValue = AStack_82.timeStamp.fakeValue;
                              value_09.timeStamp.inited = AStack_82.timeStamp.inited;
                              value_09.timeStamp._17_3_ = AStack_82.timeStamp._17_3_;
                              value_09.persistant = AStack_82.persistant;
                              value_09._53_3_ = AStack_82._53_3_;
                              value_09.lastTimeStamp = AStack_82.lastTimeStamp;
                              value_09.avatarModifierPackageType =
                                   AStack_82.avatarModifierPackageType;
                              value_09.avatarModifierPackageAdditionPolicy =
                                   AStack_82.avatarModifierPackageAdditionPolicy;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,AvatarModifierPackage]::
                              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                        (this,7,value_09,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                        );
                              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                       func_?();
                              pFStack_83 = AvatarModifierPackageFactory_Const
                                                      (25.0,(MethodInfo *)0x0);
                              uStack_84 = 1;
                              uStack_85 = 0x13;
                              func_?();
                              if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                if (pAVar1->max_length == 0) goto code_?;
                                pAVar1->vector[0].avatarModifierType = uStack_84;
                                pAVar1->vector[0].avatarModifierEffect = uStack_85;
                                pAVar1->vector[0].value = pFStack_83;
                                func_?(&pAVar1->vector[0].value);
                                func_?(&AStack_86,0,0x44);
                                AvatarModifierPackage::AvatarModifierPackage__ctor
                                          (&AStack_86,AvatarModifierPackageType__Enum_FlamerBurn,
                                           AvatarModifierPackageAdditionPolicy__Enum_Renew,0.5,
                                           pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                value_10.duration.currentCryptoKey =
                                     AStack_86.duration.currentCryptoKey;
                                value_10.id = AStack_86.id;
                                value_10.duration.hiddenValue = AStack_86.duration.hiddenValue;
                                value_10.duration.hiddenValueOld =
                                     AStack_86.duration.hiddenValueOld;
                                value_10.duration.fakeValue = AStack_86.duration.fakeValue;
                                value_10.duration.inited = AStack_86.duration.inited;
                                value_10.duration._17_3_ = AStack_86.duration._17_3_;
                                value_10.avatarModifiers = AStack_86.avatarModifiers;
                                value_10.actionsToTakeVsTypes = AStack_86.actionsToTakeVsTypes;
                                value_10.timeStamp.currentCryptoKey =
                                     AStack_86.timeStamp.currentCryptoKey;
                                value_10.timeStamp.hiddenValue = AStack_86.timeStamp.hiddenValue;
                                value_10.timeStamp.hiddenValueOld =
                                     AStack_86.timeStamp.hiddenValueOld;
                                value_10.timeStamp.fakeValue = AStack_86.timeStamp.fakeValue;
                                value_10.timeStamp.inited = AStack_86.timeStamp.inited;
                                value_10.timeStamp._17_3_ = AStack_86.timeStamp._17_3_;
                                value_10.persistant = AStack_86.persistant;
                                value_10._53_3_ = AStack_86._53_3_;
                                value_10.lastTimeStamp = AStack_86.lastTimeStamp;
                                value_10.avatarModifierPackageType =
                                     AStack_86.avatarModifierPackageType;
                                value_10.avatarModifierPackageAdditionPolicy =
                                     AStack_86.avatarModifierPackageAdditionPolicy;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,AvatarModifierPackage]::
                                Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                          (this,8,value_10,
                                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                          );
                                pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                         func_?();
                                pFStack_87 = AvatarModifierPackageFactory_Const
                                                        (0.5,(MethodInfo *)0x0);
                                uStack_88 = 0;
                                uStack_89 = 0;
                                func_?();
                                if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                  if (pAVar1->max_length == 0) goto code_?;
                                  pAVar1->vector[0].avatarModifierType = uStack_88;
                                  pAVar1->vector[0].avatarModifierEffect = uStack_89;
                                  pAVar1->vector[0].value = pFStack_87;
                                  func_?(&pAVar1->vector[0].value);
                                  pFStack_90 = AvatarModifierPackageFactory_Const
                                                          (0.95,(MethodInfo *)0x0);
                                  uStack_91 = 0;
                                  uStack_92 = 4;
                                  func_?(&pFStack_90);
                                  if (pAVar1->max_length < 2) goto code_?;
                                  pAVar1->vector[1].avatarModifierType = uStack_91;
                                  pAVar1->vector[1].avatarModifierEffect = uStack_92;
                                  pAVar1->vector[1].value = pFStack_90;
                                  func_?(&pAVar1->vector[1].value);
                                  func_?(&AStack_93,0,0x44);
                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                            (&AStack_93,AvatarModifierPackageType__Enum_Underwater,
                                             AvatarModifierPackageAdditionPolicy__Enum_Renew,10.0,
                                             pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                  value_11.duration.currentCryptoKey =
                                       AStack_93.duration.currentCryptoKey;
                                  value_11.id = AStack_93.id;
                                  value_11.duration.hiddenValue = AStack_93.duration.hiddenValue;
                                  value_11.duration.hiddenValueOld =
                                       AStack_93.duration.hiddenValueOld;
                                  value_11.duration.fakeValue = AStack_93.duration.fakeValue;
                                  value_11.duration.inited = AStack_93.duration.inited;
                                  value_11.duration._17_3_ = AStack_93.duration._17_3_;
                                  value_11.avatarModifiers = AStack_93.avatarModifiers;
                                  value_11.actionsToTakeVsTypes = AStack_93.actionsToTakeVsTypes;
                                  value_11.timeStamp.currentCryptoKey =
                                       AStack_93.timeStamp.currentCryptoKey;
                                  value_11.timeStamp.hiddenValue = AStack_93.timeStamp.hiddenValue;
                                  value_11.timeStamp.hiddenValueOld =
                                       AStack_93.timeStamp.hiddenValueOld;
                                  value_11.timeStamp.fakeValue = AStack_93.timeStamp.fakeValue;
                                  value_11.timeStamp.inited = AStack_93.timeStamp.inited;
                                  value_11.timeStamp._17_3_ = AStack_93.timeStamp._17_3_;
                                  value_11.persistant = AStack_93.persistant;
                                  value_11._53_3_ = AStack_93._53_3_;
                                  value_11.lastTimeStamp = AStack_93.lastTimeStamp;
                                  value_11.avatarModifierPackageType =
                                       AStack_93.avatarModifierPackageType;
                                  value_11.avatarModifierPackageAdditionPolicy =
                                       AStack_93.avatarModifierPackageAdditionPolicy;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,AvatarModifierPackage]::
                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                            (this,9,value_11,
                                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                            );
                                  pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                           func_?();
                                  pFStack_94 = AvatarModifierPackageFactory_Const
                                                          (0.0,(MethodInfo *)0x0);
                                  uStack_95 = 2;
                                  uStack_96 = 0xc;
                                  func_?();
                                  if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                  {
                                    if (pAVar1->max_length == 0) goto code_?;
                                    pAVar1->vector[0].avatarModifierType = uStack_95;
                                    pAVar1->vector[0].avatarModifierEffect = uStack_96;
                                    pAVar1->vector[0].value = pFStack_94;
                                    func_?(&pAVar1->vector[0].value);
                                    pFStack_97 = AvatarModifierPackageFactory_Const
                                                            (0.1,(MethodInfo *)0x0);
                                    uStack_98 = 0;
                                    uStack_99 = 2;
                                    func_?(&pFStack_97);
                                    if (pAVar1->max_length < 2) goto code_?;
                                    pAVar1->vector[1].avatarModifierType = uStack_98;
                                    pAVar1->vector[1].avatarModifierEffect = uStack_99;
                                    pAVar1->vector[1].value = pFStack_97;
                                    func_?(&pAVar1->vector[1].value);
                                    pFStack_100 = AvatarModifierPackageFactory_Const
                                                            (0.4,(MethodInfo *)0x0);
                                    uStack_101 = 0;
                                    uStack_102 = 3;
                                    func_?(&pFStack_100);
                                    if (pAVar1->max_length < 3) goto code_?;
                                    pAVar1->vector[2].avatarModifierType = uStack_101;
                                    pAVar1->vector[2].avatarModifierEffect = uStack_102;
                                    pAVar1->vector[2].value = pFStack_100;
                                    func_?(&pAVar1->vector[2].value);
                                    func_?(&AStack_103,0,0x44);
                                    AvatarModifierPackage::AvatarModifierPackage__ctor
                                              (&AStack_103,AvatarModifierPackageType__Enum_Frozen,
                                               AvatarModifierPackageAdditionPolicy__Enum_Renew,4.2,
                                               pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                    value_12.duration.currentCryptoKey =
                                         AStack_103.duration.currentCryptoKey;
                                    value_12.id = AStack_103.id;
                                    value_12.duration.hiddenValue = AStack_103.duration.hiddenValue;
                                    value_12.duration.hiddenValueOld =
                                         AStack_103.duration.hiddenValueOld;
                                    value_12.duration.fakeValue = AStack_103.duration.fakeValue;
                                    value_12.duration.inited = AStack_103.duration.inited;
                                    value_12.duration._17_3_ = AStack_103.duration._17_3_;
                                    value_12.avatarModifiers = AStack_103.avatarModifiers;
                                    value_12.actionsToTakeVsTypes = AStack_103.actionsToTakeVsTypes;
                                    value_12.timeStamp.currentCryptoKey =
                                         AStack_103.timeStamp.currentCryptoKey;
                                    value_12.timeStamp.hiddenValue =
                                         AStack_103.timeStamp.hiddenValue;
                                    value_12.timeStamp.hiddenValueOld =
                                         AStack_103.timeStamp.hiddenValueOld;
                                    value_12.timeStamp.fakeValue = AStack_103.timeStamp.fakeValue;
                                    value_12.timeStamp.inited = AStack_103.timeStamp.inited;
                                    value_12.timeStamp._17_3_ = AStack_103.timeStamp._17_3_;
                                    value_12.persistant = AStack_103.persistant;
                                    value_12._53_3_ = AStack_103._53_3_;
                                    value_12.lastTimeStamp = AStack_103.lastTimeStamp;
                                    value_12.avatarModifierPackageType =
                                         AStack_103.avatarModifierPackageType;
                                    value_12.avatarModifierPackageAdditionPolicy =
                                         AStack_103.avatarModifierPackageAdditionPolicy;
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,AvatarModifierPackage]::
                                    Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                              (this,10,value_12,
                                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                              );
                                    pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                             func_?();
                                    pFStack_104 = AvatarModifierPackageFactory_Const
                                                            (3.0,(MethodInfo *)0x0);
                                    uStack_105 = 0;
                                    uStack_106 = 3;
                                    func_?();
                                    if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0
                                       ) {
                                      if (pAVar1->max_length == 0) goto code_?;
                                      pAVar1->vector[0].avatarModifierType = uStack_105;
                                      pAVar1->vector[0].avatarModifierEffect = uStack_106;
                                      pAVar1->vector[0].value = pFStack_104;
                                      func_?(&pAVar1->vector[0].value);
                                      pFStack_107 = AvatarModifierPackageFactory_Const
                                                              (20.0,(MethodInfo *)0x0);
                                      uStack_108 = 0;
                                      uStack_109 = 0x14;
                                      func_?(&pFStack_107);
                                      if (pAVar1->max_length < 2) goto code_?;
                                      pAVar1->vector[1].avatarModifierType = uStack_108;
                                      pAVar1->vector[1].avatarModifierEffect = uStack_109;
                                      pAVar1->vector[1].value = pFStack_107;
                                      func_?(&pAVar1->vector[1].value);
                                      func_?(&AStack_110,0,0x44);
                                      AvatarModifierPackage::AvatarModifierPackage__ctor
                                                (&AStack_110,
                                                 AvatarModifierPackageType__Enum_NinjaRun,
                                                 AvatarModifierPackageAdditionPolicy__Enum_Renew,7.0
                                                 ,pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                      value_13.duration.currentCryptoKey =
                                           AStack_110.duration.currentCryptoKey;
                                      value_13.id = AStack_110.id;
                                      value_13.duration.hiddenValue =
                                           AStack_110.duration.hiddenValue;
                                      value_13.duration.hiddenValueOld =
                                           AStack_110.duration.hiddenValueOld;
                                      value_13.duration.fakeValue = AStack_110.duration.fakeValue;
                                      value_13.duration.inited = AStack_110.duration.inited;
                                      value_13.duration._17_3_ = AStack_110.duration._17_3_;
                                      value_13.avatarModifiers = AStack_110.avatarModifiers;
                                      value_13.actionsToTakeVsTypes =
                                           AStack_110.actionsToTakeVsTypes;
                                      value_13.timeStamp.currentCryptoKey =
                                           AStack_110.timeStamp.currentCryptoKey;
                                      value_13.timeStamp.hiddenValue =
                                           AStack_110.timeStamp.hiddenValue;
                                      value_13.timeStamp.hiddenValueOld =
                                           AStack_110.timeStamp.hiddenValueOld;
                                      value_13.timeStamp.fakeValue = AStack_110.timeStamp.fakeValue;
                                      value_13.timeStamp.inited = AStack_110.timeStamp.inited;
                                      value_13.timeStamp._17_3_ = AStack_110.timeStamp._17_3_;
                                      value_13.persistant = AStack_110.persistant;
                                      value_13._53_3_ = AStack_110._53_3_;
                                      value_13.lastTimeStamp = AStack_110.lastTimeStamp;
                                      value_13.avatarModifierPackageType =
                                           AStack_110.avatarModifierPackageType;
                                      value_13.avatarModifierPackageAdditionPolicy =
                                           AStack_110.avatarModifierPackageAdditionPolicy;
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                      Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                (this,0xb,value_13,
                                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                );
                                      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                               func_?();
                                      pFStack_111 = AvatarModifierPackageFactory_Const
                                                              (0.3,(MethodInfo *)0x0);
                                      uStack_112 = 0;
                                      uStack_113 = 3;
                                      func_?();
                                      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)
                                                    0x0) {
                                        if (pAVar1->max_length == 0) goto code_?;
                                        pAVar1->vector[0].avatarModifierType = uStack_112;
                                        pAVar1->vector[0].avatarModifierEffect = uStack_113;
                                        pAVar1->vector[0].value = pFStack_111;
                                        func_?(&pAVar1->vector[0].value);
                                        func_?(&AStack_114,0,0x44);
                                        AvatarModifierPackage::AvatarModifierPackage__ctor
                                                  (&AStack_114,
                                                                                                      
                                                  AvatarModifierPackageType__Enum_TimeAttackFlagDebriefSlow
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  7.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                        value_14.duration.currentCryptoKey =
                                             AStack_114.duration.currentCryptoKey;
                                        value_14.id = AStack_114.id;
                                        value_14.duration.hiddenValue =
                                             AStack_114.duration.hiddenValue;
                                        value_14.duration.hiddenValueOld =
                                             AStack_114.duration.hiddenValueOld;
                                        value_14.duration.fakeValue = AStack_114.duration.fakeValue;
                                        value_14.duration.inited = AStack_114.duration.inited;
                                        value_14.duration._17_3_ = AStack_114.duration._17_3_;
                                        value_14.avatarModifiers = AStack_114.avatarModifiers;
                                        value_14.actionsToTakeVsTypes =
                                             AStack_114.actionsToTakeVsTypes;
                                        value_14.timeStamp.currentCryptoKey =
                                             AStack_114.timeStamp.currentCryptoKey;
                                        value_14.timeStamp.hiddenValue =
                                             AStack_114.timeStamp.hiddenValue;
                                        value_14.timeStamp.hiddenValueOld =
                                             AStack_114.timeStamp.hiddenValueOld;
                                        value_14.timeStamp.fakeValue =
                                             AStack_114.timeStamp.fakeValue;
                                        value_14.timeStamp.inited = AStack_114.timeStamp.inited;
                                        value_14.timeStamp._17_3_ = AStack_114.timeStamp._17_3_;
                                        value_14.persistant = AStack_114.persistant;
                                        value_14._53_3_ = AStack_114._53_3_;
                                        value_14.lastTimeStamp = AStack_114.lastTimeStamp;
                                        value_14.avatarModifierPackageType =
                                             AStack_114.avatarModifierPackageType;
                                        value_14.avatarModifierPackageAdditionPolicy =
                                             AStack_114.avatarModifierPackageAdditionPolicy;
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                        Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                  (this,0x13,value_14,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                                 func_?();
                                        pFStack_115 = AvatarModifierPackageFactory_Const
                                                                (0.4,(MethodInfo *)0x0);
                                        uStack_116 = 0;
                                        uStack_117 = 3;
                                        func_?();
                                        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *
                                                      )0x0) {
                                          if (pAVar1->max_length == 0) goto code_?;
                                          pAVar1->vector[0].avatarModifierType = uStack_116;
                                          pAVar1->vector[0].avatarModifierEffect = uStack_117;
                                          pAVar1->vector[0].value = pFStack_115;
                                          func_?(&pAVar1->vector[0].value);
                                          pFStack_118 = AvatarModifierPackageFactory_Const
                                                                  (0.25,(MethodInfo *)0x0);
                                          uStack_119 = 2;
                                          uStack_120 = 5;
                                          func_?(&pFStack_118);
                                          if (pAVar1->max_length < 2) goto code_?;
                                          pAVar1->vector[1].avatarModifierType = uStack_119;
                                          pAVar1->vector[1].avatarModifierEffect = uStack_120;
                                          pAVar1->vector[1].value = pFStack_118;
                                          func_?(&pAVar1->vector[1].value);
                                          pFStack_121 = AvatarModifierPackageFactory_Const
                                                                  (0.6,(MethodInfo *)0x0);
                                          uStack_122 = 0;
                                          uStack_123 = 2;
                                          func_?(&pFStack_121);
                                          if (pAVar1->max_length < 3) goto code_?;
                                          pAVar1->vector[2].avatarModifierType = uStack_122;
                                          pAVar1->vector[2].avatarModifierEffect = uStack_123;
                                          pAVar1->vector[2].value = pFStack_121;
                                          func_?(&pAVar1->vector[2].value);
                                          pFStack_124 = AvatarModifierPackageFactory_Const
                                                                  (4.0,(MethodInfo *)0x0);
                                          uStack_125 = 0;
                                          uStack_126 = 6;
                                          func_?(&pFStack_124);
                                          if (pAVar1->max_length < 4) goto code_?;
                                          pAVar1->vector[3].avatarModifierType = uStack_125;
                                          pAVar1->vector[3].avatarModifierEffect = uStack_126;
                                          pAVar1->vector[3].value = pFStack_124;
                                          func_?(&pAVar1->vector[3].value);
                                          pFStack_127 = AvatarModifierPackageFactory_Const
                                                                  (1.0,(MethodInfo *)0x0);
                                          uStack_128 = 2;
                                          uStack_129 = 8;
                                          func_?(&pFStack_127);
                                          if (pAVar1->max_length < 5) goto code_?;
                                          pAVar1->vector[4].avatarModifierType = uStack_128;
                                          pAVar1->vector[4].avatarModifierEffect = uStack_129;
                                          pAVar1->vector[4].value = pFStack_127;
                                          func_?(&pAVar1->vector[4].value);
                                          pFStack_130 = AvatarModifierPackageFactory_Const
                                                                  (1.0,(MethodInfo *)0x0);
                                          uStack_131 = 2;
                                          uStack_132 = 9;
                                          func_?(&pFStack_130);
                                          if (pAVar1->max_length < 6) goto code_?;
                                          pAVar1->vector[5].avatarModifierType = uStack_131;
                                          pAVar1->vector[5].avatarModifierEffect = uStack_132;
                                          pAVar1->vector[5].value = pFStack_130;
                                          func_?(&pAVar1->vector[5].value);
                                          pFStack_133 = AvatarModifierPackageFactory_Const
                                                                  (0.25,(MethodInfo *)0x0);
                                          uStack_134 = 2;
                                          uStack_135 = 1;
                                          func_?(&pFStack_133);
                                          if (pAVar1->max_length < 7) goto code_?;
                                          pAVar1->vector[6].avatarModifierType = uStack_134;
                                          pAVar1->vector[6].avatarModifierEffect = uStack_135;
                                          pAVar1->vector[6].value = pFStack_133;
                                          func_?(&pAVar1->vector[6].value);
                                          pDVar65 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::
                                          Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                                          Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                    (pDVar65,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                          if (pDVar65 != (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Int32Enum]::
                                            Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                      ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,0xc,1,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Int32Enum]::
                                            Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                      ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,0xf,3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                            func_?(&AStack_136,0);
                                            AvatarModifierPackage::AvatarModifierPackage__ctor
                                                      (&AStack_136,
                                                       AvatarModifierPackageType__Enum_Shrunken,
                                                                                                              
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  35.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar65,0,(MethodInfo *)0x0);
                                            value_21.duration.currentCryptoKey =
                                                 AStack_136.duration.currentCryptoKey;
                                            value_21.id = AStack_136.id;
                                            value_21.duration.hiddenValue =
                                                 AStack_136.duration.hiddenValue;
                                            value_21.duration.hiddenValueOld =
                                                 AStack_136.duration.hiddenValueOld;
                                            value_21.duration.fakeValue =
                                                 AStack_136.duration.fakeValue;
                                            value_21.duration.inited = AStack_136.duration.inited;
                                            value_21.duration._17_3_ = AStack_136.duration._17_3_;
                                            value_21.avatarModifiers = AStack_136.avatarModifiers;
                                            value_21.actionsToTakeVsTypes =
                                                 AStack_136.actionsToTakeVsTypes;
                                            value_21.timeStamp.currentCryptoKey =
                                                 AStack_136.timeStamp.currentCryptoKey;
                                            value_21.timeStamp.hiddenValue =
                                                 AStack_136.timeStamp.hiddenValue;
                                            value_21.timeStamp.hiddenValueOld =
                                                 AStack_136.timeStamp.hiddenValueOld;
                                            value_21.timeStamp.fakeValue =
                                                 AStack_136.timeStamp.fakeValue;
                                            value_21.timeStamp.inited = AStack_136.timeStamp.inited;
                                            value_21.timeStamp._17_3_ = AStack_136.timeStamp._17_3_;
                                            value_21.persistant = AStack_136.persistant;
                                            value_21._53_3_ = AStack_136._53_3_;
                                            value_21.lastTimeStamp = AStack_136.lastTimeStamp;
                                            value_21.avatarModifierPackageType =
                                                 AStack_136.avatarModifierPackageType;
                                            value_21.avatarModifierPackageAdditionPolicy =
                                                 AStack_136.avatarModifierPackageAdditionPolicy;
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                      (this,0xc,value_21,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                                     func_?();
                                            pFStack_137 = AvatarModifierPackageFactory_Const
                                                                    (0.96,(MethodInfo *)0x0);
                                            uStack_138 = 2;
                                            uStack_139 = 4;
                                            func_?();
                                            if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                            {
                                              if (pAVar1->max_length == 0) goto code_?;
                                              pAVar1->vector[0].avatarModifierType = uStack_138;
                                              pAVar1->vector[0].avatarModifierEffect = uStack_139;
                                              pAVar1->vector[0].value = pFStack_137;
                                              func_?(&pAVar1->vector[0].value);
                                              func_?(&AStack_140,0,0x44);
                                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                                        (&AStack_140,
                                                                                                                  
                                                  AvatarModifierPackageType__Enum_WindFriction,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                              value_15.duration.currentCryptoKey =
                                                   AStack_140.duration.currentCryptoKey;
                                              value_15.id = AStack_140.id;
                                              value_15.duration.hiddenValue =
                                                   AStack_140.duration.hiddenValue;
                                              value_15.duration.hiddenValueOld =
                                                   AStack_140.duration.hiddenValueOld;
                                              value_15.duration.fakeValue =
                                                   AStack_140.duration.fakeValue;
                                              value_15.duration.inited = AStack_140.duration.inited;
                                              value_15.duration._17_3_ = AStack_140.duration._17_3_;
                                              value_15.avatarModifiers = AStack_140.avatarModifiers;
                                              value_15.actionsToTakeVsTypes =
                                                   AStack_140.actionsToTakeVsTypes;
                                              value_15.timeStamp.currentCryptoKey =
                                                   AStack_140.timeStamp.currentCryptoKey;
                                              value_15.timeStamp.hiddenValue =
                                                   AStack_140.timeStamp.hiddenValue;
                                              value_15.timeStamp.hiddenValueOld =
                                                   AStack_140.timeStamp.hiddenValueOld;
                                              value_15.timeStamp.fakeValue =
                                                   AStack_140.timeStamp.fakeValue;
                                              value_15.timeStamp.inited =
                                                   AStack_140.timeStamp.inited;
                                              value_15.timeStamp._17_3_ =
                                                   AStack_140.timeStamp._17_3_;
                                              value_15.persistant = AStack_140.persistant;
                                              value_15._53_3_ = AStack_140._53_3_;
                                              value_15.lastTimeStamp = AStack_140.lastTimeStamp;
                                              value_15.avatarModifierPackageType =
                                                   AStack_140.avatarModifierPackageType;
                                              value_15.avatarModifierPackageAdditionPolicy =
                                                   AStack_140.avatarModifierPackageAdditionPolicy;
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,AvatarModifierPackage]
                                              ::
                                              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                        (this,0xd,value_15,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array
                                                        *)func_?();
                                              pFStack_141 = AvatarModifierPackageFactory_Const
                                                                      (0.5,(MethodInfo *)0x0);
                                              uStack_142 = 2;
                                              uStack_143 = 6;
                                              func_?();
                                              if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                              {
                                                if (pAVar1->max_length == 0) goto code_?;
                                                pAVar1->vector[0].avatarModifierType = uStack_142;
                                                pAVar1->vector[0].avatarModifierEffect = uStack_143;
                                                pAVar1->vector[0].value = pFStack_141;
                                                func_?(&pAVar1->vector[0].value);
                                                func_?(&AStack_144,0,0x44);
                                                AvatarModifierPackage::AvatarModifierPackage__ctor
                                                          (&AStack_144,
                                                           AvatarModifierPackageType__Enum_Shielded,
                                                                                                                      
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,1,(MethodInfo *)0x0);
                                                value_16.duration.currentCryptoKey =
                                                     AStack_144.duration.currentCryptoKey;
                                                value_16.id = AStack_144.id;
                                                value_16.duration.hiddenValue =
                                                     AStack_144.duration.hiddenValue;
                                                value_16.duration.hiddenValueOld =
                                                     AStack_144.duration.hiddenValueOld;
                                                value_16.duration.fakeValue =
                                                     AStack_144.duration.fakeValue;
                                                value_16.duration.inited =
                                                     AStack_144.duration.inited;
                                                value_16.duration._17_3_ =
                                                     AStack_144.duration._17_3_;
                                                value_16.avatarModifiers =
                                                     AStack_144.avatarModifiers;
                                                value_16.actionsToTakeVsTypes =
                                                     AStack_144.actionsToTakeVsTypes;
                                                value_16.timeStamp.currentCryptoKey =
                                                     AStack_144.timeStamp.currentCryptoKey;
                                                value_16.timeStamp.hiddenValue =
                                                     AStack_144.timeStamp.hiddenValue;
                                                value_16.timeStamp.hiddenValueOld =
                                                     AStack_144.timeStamp.hiddenValueOld;
                                                value_16.timeStamp.fakeValue =
                                                     AStack_144.timeStamp.fakeValue;
                                                value_16.timeStamp.inited =
                                                     AStack_144.timeStamp.inited;
                                                value_16.timeStamp._17_3_ =
                                                     AStack_144.timeStamp._17_3_;
                                                value_16.persistant = AStack_144.persistant;
                                                value_16._53_3_ = AStack_144._53_3_;
                                                value_16.lastTimeStamp = AStack_144.lastTimeStamp;
                                                value_16.avatarModifierPackageType =
                                                     AStack_144.avatarModifierPackageType;
                                                value_16.avatarModifierPackageAdditionPolicy =
                                                     AStack_144.avatarModifierPackageAdditionPolicy;
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::
                                                Int32Enum,AvatarModifierPackage]::
                                                Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                          (this,0x10,value_16,
                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                pFStack_145 = AvatarModifierPackageFactory_Const
                                                                        (1.0,(MethodInfo *)0x0);
                                                uStack_146 = 2;
                                                uStack_147 = 7;
                                                func_?();
                                                if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                {
                                                  if (pAVar1->max_length == 0)
                                                  goto code_?;
                                                  pAVar1->vector[0].avatarModifierType = uStack_146;
                                                  pAVar1->vector[0].avatarModifierEffect =
                                                       uStack_147;
                                                  pAVar1->vector[0].value = pFStack_145;
                                                  func_?(&pAVar1->vector[0].value);
                                                  func_?(&AStack_148,0,0x44);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_148,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_DisableVehiclePickup
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  value_17.duration.currentCryptoKey =
                                                       AStack_148.duration.currentCryptoKey;
                                                  value_17.id = AStack_148.id;
                                                  value_17.duration.hiddenValue =
                                                       AStack_148.duration.hiddenValue;
                                                  value_17.duration.hiddenValueOld =
                                                       AStack_148.duration.hiddenValueOld;
                                                  value_17.duration.fakeValue =
                                                       AStack_148.duration.fakeValue;
                                                  value_17.duration.inited =
                                                       AStack_148.duration.inited;
                                                  value_17.duration._17_3_ =
                                                       AStack_148.duration._17_3_;
                                                  value_17.avatarModifiers =
                                                       AStack_148.avatarModifiers;
                                                  value_17.actionsToTakeVsTypes =
                                                       AStack_148.actionsToTakeVsTypes;
                                                  value_17.timeStamp.currentCryptoKey =
                                                       AStack_148.timeStamp.currentCryptoKey;
                                                  value_17.timeStamp.hiddenValue =
                                                       AStack_148.timeStamp.hiddenValue;
                                                  value_17.timeStamp.hiddenValueOld =
                                                       AStack_148.timeStamp.hiddenValueOld;
                                                  value_17.timeStamp.fakeValue =
                                                       AStack_148.timeStamp.fakeValue;
                                                  value_17.timeStamp.inited =
                                                       AStack_148.timeStamp.inited;
                                                  value_17.timeStamp._17_3_ =
                                                       AStack_148.timeStamp._17_3_;
                                                  value_17.persistant = AStack_148.persistant;
                                                  value_17._53_3_ = AStack_148._53_3_;
                                                  value_17.lastTimeStamp = AStack_148.lastTimeStamp;
                                                  value_17.avatarModifierPackageType =
                                                       AStack_148.avatarModifierPackageType;
                                                  value_17.avatarModifierPackageAdditionPolicy =
                                                       AStack_148.
                                                       avatarModifierPackageAdditionPolicy;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0xe,value_17,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  pFVar149 = AvatarModifierPackageFactory_Const
                                                                     (1.5,(MethodInfo *)0x0);
                                                  AVar150 = (ACTkByte4)&pFStack_151;
                                                  uStack_152 = 0;
                                                  uStack_153 = 3;
                                                  pFStack_151 = pFVar149;
                                                  func_?();
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         uStack_152;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         uStack_153;
                                                    pAVar1->vector[0].value = pFStack_151;
                                                    func_?(&pAVar1->vector[0].value);
                                                    pFStack_154 = AvatarModifierPackageFactory_Const
                                                                            (2.0,(MethodInfo *)0x0);
                                                    uStack_155 = 2;
                                                    uStack_156 = 5;
                                                    func_?(&pFStack_154);
                                                    if (pAVar1->max_length < 2)
                                                    goto code_?;
                                                    pAVar1->vector[1].avatarModifierType =
                                                         uStack_155;
                                                    pAVar1->vector[1].avatarModifierEffect =
                                                         uStack_156;
                                                    pAVar1->vector[1].value = pFStack_154;
                                                    func_?(&pAVar1->vector[1].value);
                                                    pFStack_157 = AvatarModifierPackageFactory_Const
                                                                            (2.0,(MethodInfo *)0x0);
                                                    uStack_158 = 0;
                                                    uStack_159 = 2;
                                                    func_?(&pFStack_157);
                                                    if (pAVar1->max_length < 3)
                                                    goto code_?;
                                                    pAVar1->vector[2].avatarModifierType =
                                                         uStack_158;
                                                    pAVar1->vector[2].avatarModifierEffect =
                                                         uStack_159;
                                                    pAVar1->vector[2].value = pFStack_157;
                                                    func_?(&pAVar1->vector[2].value);
                                                    pFStack_160 = AvatarModifierPackageFactory_Const
                                                                            (0.5,(MethodInfo *)0x0);
                                                    uStack_161 = 0;
                                                    uStack_162 = 6;
                                                    func_?(&pFStack_160);
                                                    if (pAVar1->max_length < 4)
                                                    goto code_?;
                                                    pAVar1->vector[3].avatarModifierType =
                                                         uStack_161;
                                                    pAVar1->vector[3].avatarModifierEffect =
                                                         uStack_162;
                                                    pAVar1->vector[3].value = pFStack_160;
                                                    func_?(&pAVar1->vector[3].value);
                                                    pFStack_163 = AvatarModifierPackageFactory_Const
                                                                            (1.0,(MethodInfo *)0x0);
                                                    uStack_164 = 2;
                                                    uStack_165 = 8;
                                                    func_?(&pFStack_163);
                                                    if (pAVar1->max_length < 5)
                                                    goto code_?;
                                                    pAVar1->vector[4].avatarModifierType =
                                                         uStack_164;
                                                    pAVar1->vector[4].avatarModifierEffect =
                                                         uStack_165;
                                                    pAVar1->vector[4].value = pFStack_163;
                                                    func_?(&pAVar1->vector[4].value);
                                                    pFStack_166 = AvatarModifierPackageFactory_Const
                                                                            (1.0,(MethodInfo *)0x0);
                                                    uStack_167 = 2;
                                                    uStack_168 = 9;
                                                    func_?(&pFStack_166);
                                                    if (pAVar1->max_length < 6)
                                                    goto code_?;
                                                    pAVar1->vector[5].avatarModifierType =
                                                         uStack_167;
                                                    pAVar1->vector[5].avatarModifierEffect =
                                                         uStack_168;
                                                    pAVar1->vector[5].value = pFStack_166;
                                                    func_?(&pAVar1->vector[5].value);
                                                    pFStack_169 = AvatarModifierPackageFactory_Const
                                                                            (2.0,(MethodInfo *)0x0);
                                                    uStack_170 = 2;
                                                    uStack_171 = 1;
                                                    func_?(&pFStack_169);
                                                    if (pAVar1->max_length < 7)
                                                    goto code_?;
                                                    pAVar1->vector[6].avatarModifierType =
                                                         uStack_170;
                                                    pAVar1->vector[6].avatarModifierEffect =
                                                         uStack_171;
                                                    pAVar1->vector[6].value = pFStack_169;
                                                    func_?(&pAVar1->vector[6].value);
                                                    pDVar65 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar65,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar65 != (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,0xc,3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Int32Enum]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,0xf,1,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(&AStack_172,0);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_172,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Enlarged,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  35.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar65,0,(MethodInfo *)0x0);
                                                  value_22.duration.currentCryptoKey =
                                                       AStack_172.duration.currentCryptoKey;
                                                  value_22.id = AStack_172.id;
                                                  value_22.duration.hiddenValue =
                                                       AStack_172.duration.hiddenValue;
                                                  value_22.duration.hiddenValueOld =
                                                       AStack_172.duration.hiddenValueOld;
                                                  value_22.duration.fakeValue =
                                                       AStack_172.duration.fakeValue;
                                                  value_22.duration.inited =
                                                       AStack_172.duration.inited;
                                                  value_22.duration._17_3_ =
                                                       AStack_172.duration._17_3_;
                                                  value_22.avatarModifiers =
                                                       AStack_172.avatarModifiers;
                                                  value_22.actionsToTakeVsTypes =
                                                       AStack_172.actionsToTakeVsTypes;
                                                  value_22.timeStamp.currentCryptoKey =
                                                       AStack_172.timeStamp.currentCryptoKey;
                                                  value_22.timeStamp.hiddenValue =
                                                       AStack_172.timeStamp.hiddenValue;
                                                  value_22.timeStamp.hiddenValueOld =
                                                       AStack_172.timeStamp.hiddenValueOld;
                                                  value_22.timeStamp.fakeValue =
                                                       AStack_172.timeStamp.fakeValue;
                                                  value_22.timeStamp.inited =
                                                       AStack_172.timeStamp.inited;
                                                  value_22.timeStamp._17_3_ =
                                                       AStack_172.timeStamp._17_3_;
                                                  value_22.persistant = AStack_172.persistant;
                                                  value_22._53_3_ = AStack_172._53_3_;
                                                  value_22.lastTimeStamp = AStack_172.lastTimeStamp;
                                                  value_22.avatarModifierPackageType =
                                                       AStack_172.avatarModifierPackageType;
                                                  value_22.avatarModifierPackageAdditionPolicy =
                                                       AStack_172.
                                                       avatarModifierPackageAdditionPolicy;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0xf,value_22,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  if (cRam_? == '\0') {
                                                    func_?();
                                                    func_?();
                                                    ppMStack_173 = &
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ;
                                                  func_?();
                                                  ppMStack_174 = &
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  ;
                                                  func_?();
                                                  func_?();
                                                  cRam_? = '\x01';
                                                  }
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  if ((TypeInfo__AvatarModifierPackageFactory->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  AVar175 = (ACTkByte4)
                                                          AvatarModifierPackageFactory_Const
                                                                    (1.0,(MethodInfo *)0x0);
                                                  pAVar176 = &AStack_177;
                                                  uStack_178 = 2;
                                                  uStack_179 = 10;
                                                  AStack_177 = AVar175;
                                                  func_?();
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         uStack_178;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         uStack_179;
                                                    pAVar1->vector[0].value =
                                                         (Func_1_Single_ *)AStack_177;
                                                    func_?(&pAVar1->vector[0].value);
                                                    pDVar65 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar65,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar65 != (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,0x11,1,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(&ppMStack_173,0);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            ((AvatarModifierPackage *)&ppMStack_173,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_SpawnProtection,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  4.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar65,1,(MethodInfo *)0x0);
                                                  value_20.duration.currentCryptoKey =
                                                       (int32_t)pAVar176;
                                                  value_20.id = (int32_t)ppMStack_173;
                                                  value_20.duration.hiddenValue = AVar175;
                                                  value_20.duration.hiddenValueOld = pBStack_180;
                                                  value_20.duration.fakeValue = fStack_181;
                                                  value_20.duration._16_4_ = uStack_182;
                                                  value_20.avatarModifiers = pAStack_183;
                                                  value_20.actionsToTakeVsTypes = pDStack_184;
                                                  value_20.timeStamp.currentCryptoKey = iStack_185;
                                                  value_20.timeStamp.hiddenValue = AStack_186;
                                                  value_20.timeStamp.hiddenValueOld = pBStack_187;
                                                  value_20.timeStamp.fakeValue = fStack_188;
                                                  value_20.timeStamp._16_4_ = uStack_189;
                                                  value_20._52_4_ = uStack_190;
                                                  value_20.lastTimeStamp = fStack_191;
                                                  value_20.avatarModifierPackageType = iStack_192;
                                                  value_20.avatarModifierPackageAdditionPolicy =
                                                       iStack_193;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0x11,value_20,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  pFVar194 = AvatarModifierPackageFactory_Const
                                                                     (20.0,(MethodInfo *)0x0);
                                                  ppFVar195 = &pFStack_196;
                                                  uStack_197 = 1;
                                                  uStack_198 = 0xf;
                                                  pFStack_196 = pFVar194;
                                                  func_?();
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         uStack_197;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         uStack_198;
                                                    pAVar1->vector[0].value = pFStack_196;
                                                    func_?(&pAVar1->vector[0].value);
                                                    pFStack_199 = AvatarModifierPackageFactory_Const
                                                                            (20.0,(MethodInfo *)0x0)
                                                    ;
                                                    uStack_200 = 1;
                                                    uStack_201 = 0x15;
                                                    func_?(&pFStack_199);
                                                    if (pAVar1->max_length < 2)
                                                    goto code_?;
                                                    pAVar1->vector[1].avatarModifierType =
                                                         uStack_200;
                                                    pAVar1->vector[1].avatarModifierEffect =
                                                         uStack_201;
                                                    pAVar1->vector[1].value = pFStack_199;
                                                    func_?(&pAVar1->vector[1].value);
                                                    pDVar65 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar65,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar65 != (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,4,2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Int32Enum]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar65,1,2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(&iStack_202,0);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            ((AvatarModifierPackage *)&iStack_202,
                                                             AvatarModifierPackageType__Enum_RayHeal
                                                             ,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Add,0.2,
                                                  pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar65,0,(MethodInfo *)0x0);
                                                  puVar203 = &UNK_?;
                                                  value_23.duration.currentCryptoKey =
                                                       (int32_t)puStack_204;
                                                  value_23.id = iStack_202;
                                                  value_23.duration.hiddenValue = AVar7;
                                                  value_23.duration.hiddenValueOld =
                                                       (Byte__Array *)AVar6;
                                                  value_23.duration.fakeValue = (float)pBStack_205;
                                                  value_23.duration._16_4_ = fStack_206;
                                                  value_23.avatarModifiers = pAStack_207;
                                                  value_23.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pAStack_208;
                                                  value_23.timeStamp.currentCryptoKey =
                                                       (int32_t)pDStack_209;
                                                  value_23.timeStamp.hiddenValue =
                                                       (ACTkByte4)&UNK_?;
                                                  value_23.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)AVar150;
                                                  value_23.timeStamp.fakeValue = (float)pFVar149;
                                                  value_23.timeStamp._16_4_ = fStack_210;
                                                  value_23._52_4_ = &UNK_?;
                                                  value_23.lastTimeStamp = (float)ppFVar195;
                                                  value_23.avatarModifierPackageType =
                                                       (int32_t)pFVar194;
                                                  value_23.avatarModifierPackageAdditionPolicy =
                                                       (int32_t)ppMStack_174;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0x12,value_23,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  iVar211 = 1;
                                                  puVar212 = &UNK_?;
                                                  pAVar213 = 
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier;
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  pFStack_214 = AvatarModifierPackageFactory_Const
                                                                          (7.0,(MethodInfo *)0x0);
                                                  uStack_215 = 1;
                                                  uStack_216 = 0x1d;
                                                  func_?();
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length != 0) {
                                                      pAVar1->vector[0].avatarModifierType =
                                                           uStack_215;
                                                      pAVar1->vector[0].avatarModifierEffect =
                                                           uStack_216;
                                                      pAVar1->vector[0].value = pFStack_214;
                                                      func_?(&pAVar1->vector[0].value);
                                                      func_?(&stack0xfffff6e8,0,0x44);
                                                      iVar217 = 0;
                                                      AvatarModifierPackage::
                                                      AvatarModifierPackage__ctor
                                                                ((AvatarModifierPackage *)
                                                                 &stack0xfffff6e8,
                                                                                                                                  
                                                  AvatarModifierPackageType__Enum_RayHealEnemy,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  1.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  value_18.duration.currentCryptoKey._0_1_ =
                                                       AVar7.b1;
                                                  value_18.duration.currentCryptoKey._1_1_ =
                                                       AVar7.b2;
                                                  value_18.duration.currentCryptoKey._2_1_ =
                                                       AVar7.b3;
                                                  value_18.duration.currentCryptoKey._3_1_ =
                                                       AVar7.b4;
                                                  value_18.id = iVar217;
                                                  value_18.duration.hiddenValue = AVar6;
                                                  value_18.duration.hiddenValueOld = pBStack_205;
                                                  value_18.duration.fakeValue = fStack_206;
                                                  value_18.duration._16_4_ = pAStack_207;
                                                  value_18.avatarModifiers = pAStack_208;
                                                  value_18.actionsToTakeVsTypes = pDStack_209;
                                                  value_18.timeStamp.currentCryptoKey =
                                                       (int32_t)
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  ;
                                                  value_18.timeStamp.hiddenValue = AVar150;
                                                  value_18.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)pFVar149;
                                                  value_18.timeStamp.fakeValue = fStack_210;
                                                  value_18.timeStamp._16_4_ = puVar203;
                                                  value_18._52_4_ = ppFVar195;
                                                  value_18.lastTimeStamp = (float)puVar212;
                                                  value_18.avatarModifierPackageType =
                                                       (int32_t)pAVar213;
                                                  value_18.avatarModifierPackageAdditionPolicy =
                                                       iVar211;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0x19,value_18,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  TypeInfo__AvatarModifierPackageFactory->
                                                  static_fields->protoPackages =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_
                                                  *)this;
                                                  func_?();
                                                  return;
                                                  }
                                                  goto code_?;
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
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar218 = (code *)swi(3);
  (*pcVar218)();
  return;
}

