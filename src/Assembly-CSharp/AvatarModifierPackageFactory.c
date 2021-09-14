
/* AvatarModifierPackage AssembleInvulnerabilityPackage(AvatarModifierPackageType, Single) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::
AvatarModifierPackageFactory_AssembleInvulnerabilityPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum type,
          float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,1);
  if (iVar1 != 0) {
    if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarModifierPackageFactory);
    }
    uVar2 = 2;
    pFVar3 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(10,uVar2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar3;
    this = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (this != (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[AvatarModifierPackageType,ModifierActions]::
      Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
                (this,AvatarModifierPackageType__Enum_SpawnProtection,ModifierActions__Enum_Renew,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                );
      func_?(__return_storage_ptr__,0,0x40);
      func_?(__return_storage_ptr__,type,1,time,iVar1,this,1,0);
      return __return_storage_ptr__;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarModifierPackageFactory___Const_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = (void *)c;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarModifierPackageFactory___Const_c__AnonStorey0____m__0__,
               MethodInfo__System__Func<float>__Func_System__Object__void__);
    return (Func_1_Single_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pFVar2 = (Func_1_Single_ *)(*pcVar1)();
  return pFVar2;
}


/* AvatarModifierPackage GetPackage(AvatarModifierPackageType) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum packageType
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&iStack_1,0,0x40);
  if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  this = TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages;
  if (this != (Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_ *)0x0) {
    pAVar2 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
             Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__get_Item
                       (&AStack_3,this,packageType,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                       );
    iStack_1 = pAVar2->id;
    iStack_4 = (pAVar2->duration).currentCryptoKey;
    AStack_5 = (pAVar2->duration).hiddenValue;
    pBStack_6 = (pAVar2->duration).hiddenValueOld;
    fStack_7 = (pAVar2->duration).fakeValue;
    uStack_8 = *(undefined4 *)&(pAVar2->duration).inited;
    pAStack_9 = pAVar2->avatarModifiers;
    pDStack_10 = pAVar2->actionsToTakeVsTypes;
    iStack_11 = (pAVar2->timeStamp).currentCryptoKey;
    AStack_12 = (pAVar2->timeStamp).hiddenValue;
    pBStack_13 = (pAVar2->timeStamp).hiddenValueOld;
    fStack_14 = (pAVar2->timeStamp).fakeValue;
    uStack_15 = *(undefined4 *)&(pAVar2->timeStamp).inited;
    uStack_16 = *(undefined4 *)&pAVar2->persistant;
    iStack_17 = pAVar2->avatarModifierPackageType;
    iStack_18 = pAVar2->avatarModifierPackageAdditionPolicy;
    func_?(&iStack_1,0);
    __return_storage_ptr__->id = iStack_1;
    (__return_storage_ptr__->duration).currentCryptoKey = iStack_4;
    (__return_storage_ptr__->duration).hiddenValue = AStack_5;
    (__return_storage_ptr__->duration).hiddenValueOld = pBStack_6;
    (__return_storage_ptr__->duration).fakeValue = fStack_7;
    *(undefined4 *)&(__return_storage_ptr__->duration).inited = uStack_8;
    __return_storage_ptr__->avatarModifiers = pAStack_9;
    __return_storage_ptr__->actionsToTakeVsTypes = pDStack_10;
    (__return_storage_ptr__->timeStamp).currentCryptoKey = iStack_11;
    (__return_storage_ptr__->timeStamp).hiddenValue = AStack_12;
    (__return_storage_ptr__->timeStamp).hiddenValueOld = pBStack_13;
    (__return_storage_ptr__->timeStamp).fakeValue = fStack_14;
    *(undefined4 *)&(__return_storage_ptr__->timeStamp).inited = uStack_15;
    *(undefined4 *)&__return_storage_ptr__->persistant = uStack_16;
    __return_storage_ptr__->avatarModifierPackageType = iStack_17;
    __return_storage_ptr__->avatarModifierPackageAdditionPolicy = iStack_18;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  pAVar2 = (AvatarModifierPackage *)(*pcVar19)();
  return pAVar2;
}


/* AvatarModifierPackageFactory() */

void Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
            );
  iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,1);
  if (iVar1 == 0) goto code_?;
  uStack_2 = 1;
  uStack_3 = 0xe;
  pFVar4 = AvatarModifierPackageFactory_Const(10.0,(MethodInfo *)0x0);
  if (*(int *)(iVar1 + 0xc) == 0) {
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
  else {
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_6,0);
    func_?(&uStack_6,1,1,0x3f800000,iVar1,0,0);
    if (this == (Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_ *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    value.duration.currentCryptoKey = uStack_7;
    value.id = uStack_6;
    value.duration.hiddenValue.b1 = (undefined1)uStack_8;
    value.duration.hiddenValue.b2 = uStack_8._1_1_;
    value.duration.hiddenValue.b3 = uStack_8._2_1_;
    value.duration.hiddenValue.b4 = uStack_8._3_1_;
    value.duration.hiddenValueOld = (Byte__Array *)uStack_9;
    value.duration.fakeValue = (float)uStack_10;
    value.duration._16_4_ = uStack_11;
    value.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_12;
    value.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_13;
    value.timeStamp.currentCryptoKey = uStack_14;
    value.timeStamp.hiddenValue.b1 = (undefined1)uStack_15;
    value.timeStamp.hiddenValue.b2 = uStack_15._1_1_;
    value.timeStamp.hiddenValue.b3 = uStack_15._2_1_;
    value.timeStamp.hiddenValue.b4 = uStack_15._3_1_;
    value.timeStamp.hiddenValueOld = (Byte__Array *)uStack_16;
    value.timeStamp.fakeValue = (float)uStack_17;
    value.timeStamp._16_4_ = uStack_18;
    value._52_4_ = uStack_19;
    value.avatarModifierPackageType = uStack_20;
    value.avatarModifierPackageAdditionPolicy = iStack_21;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Fire,value,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,6);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(1.25,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 7;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
    *(ulonglong *)(iVar1 + 0x28) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x30) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 9;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 4) goto code_?;
    *(ulonglong *)(iVar1 + 0x34) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x3c) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 0xb;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 5) goto code_?;
    *(ulonglong *)(iVar1 + 0x40) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x48) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 10;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 6) goto code_?;
    *(ulonglong *)(iVar1 + 0x4c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x54) = pFVar4;
    func_?();
    func_?();
    value_22.duration.currentCryptoKey = uStack_22;
    value_22.id = uStack_23;
    value_22.duration.hiddenValue.b1 = (undefined1)uStack_24;
    value_22.duration.hiddenValue.b2 = uStack_24._1_1_;
    value_22.duration.hiddenValue.b3 = uStack_24._2_1_;
    value_22.duration.hiddenValue.b4 = uStack_24._3_1_;
    value_22.duration.hiddenValueOld = (Byte__Array *)uStack_25;
    value_22.duration.fakeValue = (float)uStack_26;
    value_22.duration._16_4_ = uStack_27;
    value_22.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_28;
    value_22.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_29;
    value_22.timeStamp.currentCryptoKey = uStack_30;
    value_22.timeStamp.hiddenValue.b1 = (undefined1)uStack_31;
    value_22.timeStamp.hiddenValue.b2 = uStack_31._1_1_;
    value_22.timeStamp.hiddenValue.b3 = uStack_31._2_1_;
    value_22.timeStamp.hiddenValue.b4 = uStack_31._3_1_;
    value_22.timeStamp.hiddenValueOld = (Byte__Array *)uStack_32;
    value_22.timeStamp.fakeValue = (float)uStack_33;
    value_22.timeStamp._16_4_ = uStack_34;
    value_22._52_4_ = uStack_35;
    value_22.avatarModifierPackageType = uStack_36;
    value_22.avatarModifierPackageAdditionPolicy = iStack_37;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Mutant,value_22,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(0.01,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(0.03,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 0xc;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
    *(ulonglong *)(iVar1 + 0x28) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x30) = pFVar4;
    func_?();
    func_?(&uStack_38,3,1);
    value_17.duration.currentCryptoKey = uStack_39;
    value_17.id = uStack_38;
    value_17.duration.hiddenValue.b1 = (undefined1)uStack_40;
    value_17.duration.hiddenValue.b2 = uStack_40._1_1_;
    value_17.duration.hiddenValue.b3 = uStack_40._2_1_;
    value_17.duration.hiddenValue.b4 = uStack_40._3_1_;
    value_17.duration.hiddenValueOld = (Byte__Array *)uStack_41;
    value_17.duration.fakeValue = (float)uStack_42;
    value_17.duration._16_4_ = uStack_43;
    value_17.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_44;
    value_17.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_45;
    value_17.timeStamp.currentCryptoKey = uStack_46;
    value_17.timeStamp.hiddenValue.b1 = (undefined1)uStack_47;
    value_17.timeStamp.hiddenValue.b2 = uStack_47._1_1_;
    value_17.timeStamp.hiddenValue.b3 = uStack_47._2_1_;
    value_17.timeStamp.hiddenValue.b4 = uStack_47._3_1_;
    value_17.timeStamp.hiddenValueOld = (Byte__Array *)uStack_48;
    value_17.timeStamp.fakeValue = (float)uStack_49;
    value_17.timeStamp._16_4_ = uStack_50;
    value_17._52_4_ = uStack_51;
    value_17.avatarModifierPackageType = uStack_52;
    value_17.avatarModifierPackageAdditionPolicy = iStack_53;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Sticky,value_17,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    func_?();
    func_?(&uStack_54,0x16,1,0x3ecccccd,iVar1);
    value_11.duration.currentCryptoKey = uStack_55;
    value_11.id = uStack_54;
    value_11.duration.hiddenValue.b1 = (undefined1)uStack_56;
    value_11.duration.hiddenValue.b2 = uStack_56._1_1_;
    value_11.duration.hiddenValue.b3 = uStack_56._2_1_;
    value_11.duration.hiddenValue.b4 = uStack_56._3_1_;
    value_11.duration.hiddenValueOld = (Byte__Array *)uStack_57;
    value_11.duration.fakeValue = (float)uStack_58;
    value_11.duration._16_4_ = uStack_59;
    value_11.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_60;
    value_11.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_61;
    value_11.timeStamp.currentCryptoKey = uStack_62;
    value_11.timeStamp.hiddenValue.b1 = (undefined1)uStack_63;
    value_11.timeStamp.hiddenValue.b2 = uStack_63._1_1_;
    value_11.timeStamp.hiddenValue.b3 = uStack_63._2_1_;
    value_11.timeStamp.hiddenValue.b4 = uStack_63._3_1_;
    value_11.timeStamp.hiddenValueOld = (Byte__Array *)uStack_64;
    value_11.timeStamp.fakeValue = (float)uStack_65;
    value_11.timeStamp._16_4_ = uStack_66;
    value_11._52_4_ = uStack_67;
    value_11.avatarModifierPackageType = uStack_68;
    value_11.avatarModifierPackageAdditionPolicy = iStack_69;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_SlowMat,value_11,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 0x13;
    pFVar4 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    func_?();
    func_?(&uStack_70,0x17,1,0x3ecccccd,iVar1);
    value_12.duration.currentCryptoKey = uStack_71;
    value_12.id = uStack_70;
    value_12.duration.hiddenValue.b1 = (undefined1)uStack_72;
    value_12.duration.hiddenValue.b2 = uStack_72._1_1_;
    value_12.duration.hiddenValue.b3 = uStack_72._2_1_;
    value_12.duration.hiddenValue.b4 = uStack_72._3_1_;
    value_12.duration.hiddenValueOld = (Byte__Array *)uStack_73;
    value_12.duration.fakeValue = (float)uStack_74;
    value_12.duration._16_4_ = uStack_75;
    value_12.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_76;
    value_12.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_77;
    value_12.timeStamp.currentCryptoKey = uStack_78;
    value_12.timeStamp.hiddenValue.b1 = (undefined1)uStack_79;
    value_12.timeStamp.hiddenValue.b2 = uStack_79._1_1_;
    value_12.timeStamp.hiddenValue.b3 = uStack_79._2_1_;
    value_12.timeStamp.hiddenValue.b4 = uStack_79._3_1_;
    value_12.timeStamp.hiddenValueOld = (Byte__Array *)uStack_80;
    value_12.timeStamp.fakeValue = (float)uStack_81;
    value_12.timeStamp._16_4_ = uStack_82;
    value_12._52_4_ = uStack_83;
    value_12.avatarModifierPackageType = uStack_84;
    value_12.avatarModifierPackageAdditionPolicy = iStack_85;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_SpeedMat,value_12,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 0x1a;
    pFVar4 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_86,0);
    func_?(&uStack_86,0x18,1,0x3ecccccd,iVar1,0,0);
    value_00.duration.currentCryptoKey = uStack_87;
    value_00.id = uStack_86;
    value_00.duration.hiddenValue.b1 = (undefined1)uStack_88;
    value_00.duration.hiddenValue.b2 = uStack_88._1_1_;
    value_00.duration.hiddenValue.b3 = uStack_88._2_1_;
    value_00.duration.hiddenValue.b4 = uStack_88._3_1_;
    value_00.duration.hiddenValueOld = (Byte__Array *)uStack_89;
    value_00.duration.fakeValue = (float)uStack_90;
    value_00.duration._16_4_ = uStack_91;
    value_00.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_92;
    value_00.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_93;
    value_00.timeStamp.currentCryptoKey = uStack_94;
    value_00.timeStamp.hiddenValue.b1 = (undefined1)uStack_95;
    value_00.timeStamp.hiddenValue.b2 = uStack_95._1_1_;
    value_00.timeStamp.hiddenValue.b3 = uStack_95._2_1_;
    value_00.timeStamp.hiddenValue.b4 = uStack_95._3_1_;
    value_00.timeStamp.hiddenValueOld = (Byte__Array *)uStack_96;
    value_00.timeStamp.fakeValue = (float)uStack_97;
    value_00.timeStamp._16_4_ = uStack_98;
    value_00._52_4_ = uStack_99;
    value_00.avatarModifierPackageType = uStack_100;
    value_00.avatarModifierPackageAdditionPolicy = iStack_101;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_CrumbleMat,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0x15;
    pFVar4 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_102,0);
    func_?(&uStack_102,4,1,0x7f800000,iVar1,0,0);
    value_01.duration.currentCryptoKey = uStack_103;
    value_01.id = uStack_102;
    value_01.duration.hiddenValue.b1 = (undefined1)uStack_104;
    value_01.duration.hiddenValue.b2 = uStack_104._1_1_;
    value_01.duration.hiddenValue.b3 = uStack_104._2_1_;
    value_01.duration.hiddenValue.b4 = uStack_104._3_1_;
    value_01.duration.hiddenValueOld = (Byte__Array *)uStack_105;
    value_01.duration.fakeValue = (float)uStack_106;
    value_01.duration._16_4_ = uStack_107;
    value_01.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_108;
    value_01.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_109;
    value_01.timeStamp.currentCryptoKey = uStack_110;
    value_01.timeStamp.hiddenValue.b1 = (undefined1)uStack_111;
    value_01.timeStamp.hiddenValue.b2 = uStack_111._1_1_;
    value_01.timeStamp.hiddenValue.b3 = uStack_111._2_1_;
    value_01.timeStamp.hiddenValue.b4 = uStack_111._3_1_;
    value_01.timeStamp.hiddenValueOld = (Byte__Array *)uStack_112;
    value_01.timeStamp.fakeValue = (float)uStack_113;
    value_01.timeStamp._16_4_ = uStack_114;
    value_01._52_4_ = uStack_115;
    value_01.avatarModifierPackageType = uStack_116;
    value_01.avatarModifierPackageAdditionPolicy = iStack_117;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Poison,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0xe;
    pFVar4 = AvatarModifierPackageFactory_Const(-2.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 1;
    uStack_3 = 0x14;
    pFVar4 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    pDVar118 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar118,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (pDVar118 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_Poison,ModifierActions__Enum_Replace,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    func_?(&uStack_119,0,0x40);
    func_?(&uStack_119,0x15,1,0x3ecccccd,iVar1);
    value_13.duration.currentCryptoKey = uStack_120;
    value_13.id = uStack_119;
    value_13.duration.hiddenValue.b1 = (undefined1)uStack_121;
    value_13.duration.hiddenValue.b2 = uStack_121._1_1_;
    value_13.duration.hiddenValue.b3 = uStack_121._2_1_;
    value_13.duration.hiddenValue.b4 = uStack_121._3_1_;
    value_13.duration.hiddenValueOld = (Byte__Array *)uStack_122;
    value_13.duration.fakeValue = (float)uStack_123;
    value_13.duration._16_4_ = uStack_124;
    value_13.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_125;
    value_13.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_126;
    value_13.timeStamp.currentCryptoKey = uStack_127;
    value_13.timeStamp.hiddenValue.b1 = (undefined1)uStack_128;
    value_13.timeStamp.hiddenValue.b2 = uStack_128._1_1_;
    value_13.timeStamp.hiddenValue.b3 = uStack_128._2_1_;
    value_13.timeStamp.hiddenValue.b4 = uStack_128._3_1_;
    value_13.timeStamp.hiddenValueOld = (Byte__Array *)uStack_129;
    value_13.timeStamp.fakeValue = (float)uStack_130;
    value_13.timeStamp._16_4_ = uStack_131;
    value_13._52_4_ = uStack_132;
    value_13.avatarModifierPackageType = uStack_133;
    value_13.avatarModifierPackageAdditionPolicy = iStack_134;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_HealingMat,value_13,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0x16;
    pFVar4 = AvatarModifierPackageFactory_Const(500.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_135,0);
    func_?(&uStack_135,0x14,1,0x7f800000,iVar1,0,0);
    value_02.duration.currentCryptoKey = uStack_136;
    value_02.id = uStack_135;
    value_02.duration.hiddenValue.b1 = (undefined1)uStack_137;
    value_02.duration.hiddenValue.b2 = uStack_137._1_1_;
    value_02.duration.hiddenValue.b3 = uStack_137._2_1_;
    value_02.duration.hiddenValue.b4 = uStack_137._3_1_;
    value_02.duration.hiddenValueOld = (Byte__Array *)uStack_138;
    value_02.duration.fakeValue = (float)uStack_139;
    value_02.duration._16_4_ = uStack_140;
    value_02.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_141;
    value_02.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_142;
    value_02.timeStamp.currentCryptoKey = uStack_143;
    value_02.timeStamp.hiddenValue.b1 = (undefined1)uStack_144;
    value_02.timeStamp.hiddenValue.b2 = uStack_144._1_1_;
    value_02.timeStamp.hiddenValue.b3 = uStack_144._2_1_;
    value_02.timeStamp.hiddenValue.b4 = uStack_144._3_1_;
    value_02.timeStamp.hiddenValueOld = (Byte__Array *)uStack_145;
    value_02.timeStamp.fakeValue = (float)uStack_146;
    value_02.timeStamp._16_4_ = uStack_147;
    value_02._52_4_ = uStack_148;
    value_02.avatarModifierPackageType = uStack_149;
    value_02.avatarModifierPackageAdditionPolicy = iStack_150;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Lethal,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0xe;
    pFVar4 = AvatarModifierPackageFactory_Const(150.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_151,0);
    func_?(&uStack_151,6,1,0x7f800000,iVar1,0,0);
    value_03.duration.currentCryptoKey = uStack_152;
    value_03.id = uStack_151;
    value_03.duration.hiddenValue.b1 = (undefined1)uStack_153;
    value_03.duration.hiddenValue.b2 = uStack_153._1_1_;
    value_03.duration.hiddenValue.b3 = uStack_153._2_1_;
    value_03.duration.hiddenValue.b4 = uStack_153._3_1_;
    value_03.duration.hiddenValueOld = (Byte__Array *)uStack_154;
    value_03.duration.fakeValue = (float)uStack_155;
    value_03.duration._16_4_ = uStack_156;
    value_03.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_157;
    value_03.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_158;
    value_03.timeStamp.currentCryptoKey = uStack_159;
    value_03.timeStamp.hiddenValue.b1 = (undefined1)uStack_160;
    value_03.timeStamp.hiddenValue.b2 = uStack_160._1_1_;
    value_03.timeStamp.hiddenValue.b3 = uStack_160._2_1_;
    value_03.timeStamp.hiddenValue.b4 = uStack_160._3_1_;
    value_03.timeStamp.hiddenValueOld = (Byte__Array *)uStack_161;
    value_03.timeStamp.fakeValue = (float)uStack_162;
    value_03.timeStamp._16_4_ = uStack_163;
    value_03._52_4_ = uStack_164;
    value_03.avatarModifierPackageType = uStack_165;
    value_03.avatarModifierPackageAdditionPolicy = iStack_166;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_InstantDeath,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 0x11;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_167,0);
    func_?(&uStack_167,5,1,0x3e4ccccd,iVar1,0,0);
    value_04.duration.currentCryptoKey = uStack_168;
    value_04.id = uStack_167;
    value_04.duration.hiddenValue.b1 = (undefined1)uStack_169;
    value_04.duration.hiddenValue.b2 = uStack_169._1_1_;
    value_04.duration.hiddenValue.b3 = uStack_169._2_1_;
    value_04.duration.hiddenValue.b4 = uStack_169._3_1_;
    value_04.duration.hiddenValueOld = (Byte__Array *)uStack_170;
    value_04.duration.fakeValue = (float)uStack_171;
    value_04.duration._16_4_ = uStack_172;
    value_04.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_173;
    value_04.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_174;
    value_04.timeStamp.currentCryptoKey = uStack_175;
    value_04.timeStamp.hiddenValue.b1 = (undefined1)uStack_176;
    value_04.timeStamp.hiddenValue.b2 = uStack_176._1_1_;
    value_04.timeStamp.hiddenValue.b3 = uStack_176._2_1_;
    value_04.timeStamp.hiddenValue.b4 = uStack_176._3_1_;
    value_04.timeStamp.hiddenValueOld = (Byte__Array *)uStack_177;
    value_04.timeStamp.fakeValue = (float)uStack_178;
    value_04.timeStamp._16_4_ = uStack_179;
    value_04._52_4_ = uStack_180;
    value_04.avatarModifierPackageType = uStack_181;
    value_04.avatarModifierPackageAdditionPolicy = iStack_182;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_WallJump,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 0xc;
    pFVar4 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_183,0);
    func_?(&uStack_183,7,1,0x3e4ccccd,iVar1,0,0);
    value_05.duration.currentCryptoKey = uStack_184;
    value_05.id = uStack_183;
    value_05.duration.hiddenValue.b1 = (undefined1)uStack_185;
    value_05.duration.hiddenValue.b2 = uStack_185._1_1_;
    value_05.duration.hiddenValue.b3 = uStack_185._2_1_;
    value_05.duration.hiddenValue.b4 = uStack_185._3_1_;
    value_05.duration.hiddenValueOld = (Byte__Array *)uStack_186;
    value_05.duration.fakeValue = (float)uStack_187;
    value_05.duration._16_4_ = uStack_188;
    value_05.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_189;
    value_05.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_190;
    value_05.timeStamp.currentCryptoKey = uStack_191;
    value_05.timeStamp.hiddenValue.b1 = (undefined1)uStack_192;
    value_05.timeStamp.hiddenValue.b2 = uStack_192._1_1_;
    value_05.timeStamp.hiddenValue.b3 = uStack_192._2_1_;
    value_05.timeStamp.hiddenValue.b4 = uStack_192._3_1_;
    value_05.timeStamp.hiddenValueOld = (Byte__Array *)uStack_193;
    value_05.timeStamp.fakeValue = (float)uStack_194;
    value_05.timeStamp._16_4_ = uStack_195;
    value_05._52_4_ = uStack_196;
    value_05.avatarModifierPackageType = uStack_197;
    value_05.avatarModifierPackageAdditionPolicy = iStack_198;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_NoFriction,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0x12;
    pFVar4 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_199,0);
    func_?(&uStack_199,8,1,0x3f000000,iVar1,0,0);
    value_06.duration.currentCryptoKey = uStack_200;
    value_06.id = uStack_199;
    value_06.duration.hiddenValue.b1 = (undefined1)uStack_201;
    value_06.duration.hiddenValue.b2 = uStack_201._1_1_;
    value_06.duration.hiddenValue.b3 = uStack_201._2_1_;
    value_06.duration.hiddenValue.b4 = uStack_201._3_1_;
    value_06.duration.hiddenValueOld = (Byte__Array *)uStack_202;
    value_06.duration.fakeValue = (float)uStack_203;
    value_06.duration._16_4_ = uStack_204;
    value_06.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_205;
    value_06.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_206;
    value_06.timeStamp.currentCryptoKey = uStack_207;
    value_06.timeStamp.hiddenValue.b1 = (undefined1)uStack_208;
    value_06.timeStamp.hiddenValue.b2 = uStack_208._1_1_;
    value_06.timeStamp.hiddenValue.b3 = uStack_208._2_1_;
    value_06.timeStamp.hiddenValue.b4 = uStack_208._3_1_;
    value_06.timeStamp.hiddenValueOld = (Byte__Array *)uStack_209;
    value_06.timeStamp.fakeValue = (float)uStack_210;
    value_06.timeStamp._16_4_ = uStack_211;
    value_06._52_4_ = uStack_212;
    value_06.avatarModifierPackageType = uStack_213;
    value_06.avatarModifierPackageAdditionPolicy = iStack_214;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_FlamerBurn,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 0;
    pFVar4 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 4;
    pFVar4 = AvatarModifierPackageFactory_Const(0.95,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    func_?();
    func_?(&uStack_215,9,1,0x41200000,iVar1);
    value_14.duration.currentCryptoKey = uStack_216;
    value_14.id = uStack_215;
    value_14.duration.hiddenValue.b1 = (undefined1)uStack_217;
    value_14.duration.hiddenValue.b2 = uStack_217._1_1_;
    value_14.duration.hiddenValue.b3 = uStack_217._2_1_;
    value_14.duration.hiddenValue.b4 = uStack_217._3_1_;
    value_14.duration.hiddenValueOld = (Byte__Array *)uStack_218;
    value_14.duration.fakeValue = (float)uStack_219;
    value_14.duration._16_4_ = uStack_220;
    value_14.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_221;
    value_14.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_222;
    value_14.timeStamp.currentCryptoKey = uStack_223;
    value_14.timeStamp.hiddenValue.b1 = (undefined1)uStack_224;
    value_14.timeStamp.hiddenValue.b2 = uStack_224._1_1_;
    value_14.timeStamp.hiddenValue.b3 = uStack_224._2_1_;
    value_14.timeStamp.hiddenValue.b4 = uStack_224._3_1_;
    value_14.timeStamp.hiddenValueOld = (Byte__Array *)uStack_225;
    value_14.timeStamp.fakeValue = (float)uStack_226;
    value_14.timeStamp._16_4_ = uStack_227;
    value_14._52_4_ = uStack_228;
    value_14.avatarModifierPackageType = uStack_229;
    value_14.avatarModifierPackageAdditionPolicy = iStack_230;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Underwater,value_14,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 0xc;
    pFVar4 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(0.4,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
    *(ulonglong *)(iVar1 + 0x28) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x30) = pFVar4;
    func_?();
    func_?(&uStack_231,10,1);
    value_18.duration.currentCryptoKey = uStack_232;
    value_18.id = uStack_231;
    value_18.duration.hiddenValue.b1 = (undefined1)uStack_233;
    value_18.duration.hiddenValue.b2 = uStack_233._1_1_;
    value_18.duration.hiddenValue.b3 = uStack_233._2_1_;
    value_18.duration.hiddenValue.b4 = uStack_233._3_1_;
    value_18.duration.hiddenValueOld = (Byte__Array *)uStack_234;
    value_18.duration.fakeValue = (float)uStack_235;
    value_18.duration._16_4_ = uStack_236;
    value_18.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_237;
    value_18.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_238;
    value_18.timeStamp.currentCryptoKey = uStack_239;
    value_18.timeStamp.hiddenValue.b1 = (undefined1)uStack_240;
    value_18.timeStamp.hiddenValue.b2 = uStack_240._1_1_;
    value_18.timeStamp.hiddenValue.b3 = uStack_240._2_1_;
    value_18.timeStamp.hiddenValue.b4 = uStack_240._3_1_;
    value_18.timeStamp.hiddenValueOld = (Byte__Array *)uStack_241;
    value_18.timeStamp.fakeValue = (float)uStack_242;
    value_18.timeStamp._16_4_ = uStack_243;
    value_18._52_4_ = uStack_244;
    value_18.avatarModifierPackageType = uStack_245;
    value_18.avatarModifierPackageAdditionPolicy = iStack_246;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Frozen,value_18,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 0x13;
    pFVar4 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    func_?();
    func_?(&uStack_247,0xb,1,0x40e00000,iVar1);
    value_15.duration.currentCryptoKey = uStack_248;
    value_15.id = uStack_247;
    value_15.duration.hiddenValue.b1 = (undefined1)uStack_249;
    value_15.duration.hiddenValue.b2 = uStack_249._1_1_;
    value_15.duration.hiddenValue.b3 = uStack_249._2_1_;
    value_15.duration.hiddenValue.b4 = uStack_249._3_1_;
    value_15.duration.hiddenValueOld = (Byte__Array *)uStack_250;
    value_15.duration.fakeValue = (float)uStack_251;
    value_15.duration._16_4_ = uStack_252;
    value_15.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_253;
    value_15.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_254;
    value_15.timeStamp.currentCryptoKey = uStack_255;
    value_15.timeStamp.hiddenValue.b1 = (undefined1)uStack_256;
    value_15.timeStamp.hiddenValue.b2 = uStack_256._1_1_;
    value_15.timeStamp.hiddenValue.b3 = uStack_256._2_1_;
    value_15.timeStamp.hiddenValue.b4 = uStack_256._3_1_;
    value_15.timeStamp.hiddenValueOld = (Byte__Array *)uStack_257;
    value_15.timeStamp.fakeValue = (float)uStack_258;
    value_15.timeStamp._16_4_ = uStack_259;
    value_15._52_4_ = uStack_260;
    value_15.avatarModifierPackageType = uStack_261;
    value_15.avatarModifierPackageAdditionPolicy = iStack_262;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_NinjaRun,value_15,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(0.3,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_263,0);
    func_?(&uStack_263,0x13,1,0x40e00000,iVar1,0,0);
    value_07.duration.currentCryptoKey = uStack_264;
    value_07.id = uStack_263;
    value_07.duration.hiddenValue.b1 = (undefined1)uStack_265;
    value_07.duration.hiddenValue.b2 = uStack_265._1_1_;
    value_07.duration.hiddenValue.b3 = uStack_265._2_1_;
    value_07.duration.hiddenValue.b4 = uStack_265._3_1_;
    value_07.duration.hiddenValueOld = (Byte__Array *)uStack_266;
    value_07.duration.fakeValue = (float)uStack_267;
    value_07.duration._16_4_ = uStack_268;
    value_07.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_269;
    value_07.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_270;
    value_07.timeStamp.currentCryptoKey = uStack_271;
    value_07.timeStamp.hiddenValue.b1 = (undefined1)uStack_272;
    value_07.timeStamp.hiddenValue.b2 = uStack_272._1_1_;
    value_07.timeStamp.hiddenValue.b3 = uStack_272._2_1_;
    value_07.timeStamp.hiddenValue.b4 = uStack_272._3_1_;
    value_07.timeStamp.hiddenValueOld = (Byte__Array *)uStack_273;
    value_07.timeStamp.fakeValue = (float)uStack_274;
    value_07.timeStamp._16_4_ = uStack_275;
    value_07._52_4_ = uStack_276;
    value_07.avatarModifierPackageType = uStack_277;
    value_07.avatarModifierPackageAdditionPolicy = iStack_278;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_TimeAttackFlagDebriefSlow,value_07,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(0.4,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 5;
    pFVar4 = AvatarModifierPackageFactory_Const(0.25,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(0.6,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
    *(ulonglong *)(iVar1 + 0x28) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x30) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 6;
    pFVar4 = AvatarModifierPackageFactory_Const(4.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 4) goto code_?;
    *(ulonglong *)(iVar1 + 0x34) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x3c) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 8;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 5) goto code_?;
    *(ulonglong *)(iVar1 + 0x40) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x48) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 9;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 6) goto code_?;
    *(ulonglong *)(iVar1 + 0x4c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x54) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 1;
    pFVar4 = AvatarModifierPackageFactory_Const(0.25,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 7) goto code_?;
    *(ulonglong *)(iVar1 + 0x58) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x60) = pFVar4;
    pDVar118 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar118,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (pDVar118 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_Shrunken,ModifierActions__Enum_Renew,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_Enlarged,ModifierActions__Enum_CancelOut,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    func_?(&uStack_279,0,0x40);
    func_?(&uStack_279);
    value_19.duration.currentCryptoKey = uStack_280;
    value_19.id = uStack_279;
    value_19.duration.hiddenValue.b1 = (undefined1)uStack_281;
    value_19.duration.hiddenValue.b2 = uStack_281._1_1_;
    value_19.duration.hiddenValue.b3 = uStack_281._2_1_;
    value_19.duration.hiddenValue.b4 = uStack_281._3_1_;
    value_19.duration.hiddenValueOld = (Byte__Array *)uStack_282;
    value_19.duration.fakeValue = (float)uStack_283;
    value_19.duration._16_4_ = uStack_284;
    value_19.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_285;
    value_19.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_286;
    value_19.timeStamp.currentCryptoKey = uStack_287;
    value_19.timeStamp.hiddenValue.b1 = (undefined1)uStack_288;
    value_19.timeStamp.hiddenValue.b2 = uStack_288._1_1_;
    value_19.timeStamp.hiddenValue.b3 = uStack_288._2_1_;
    value_19.timeStamp.hiddenValue.b4 = uStack_288._3_1_;
    value_19.timeStamp.hiddenValueOld = (Byte__Array *)uStack_289;
    value_19.timeStamp.fakeValue = (float)uStack_290;
    value_19.timeStamp._16_4_ = uStack_291;
    value_19._52_4_ = uStack_292;
    value_19.avatarModifierPackageType = uStack_293;
    value_19.avatarModifierPackageAdditionPolicy = iStack_294;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Shrunken,value_19,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 4;
    pFVar4 = AvatarModifierPackageFactory_Const(0.96,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_295,0);
    func_?(&uStack_295,0xd,1,0x7f800000,iVar1,0,0);
    value_08.duration.currentCryptoKey = uStack_296;
    value_08.id = uStack_295;
    value_08.duration.hiddenValue.b1 = (undefined1)uStack_297;
    value_08.duration.hiddenValue.b2 = uStack_297._1_1_;
    value_08.duration.hiddenValue.b3 = uStack_297._2_1_;
    value_08.duration.hiddenValue.b4 = uStack_297._3_1_;
    value_08.duration.hiddenValueOld = (Byte__Array *)uStack_298;
    value_08.duration.fakeValue = (float)uStack_299;
    value_08.duration._16_4_ = uStack_300;
    value_08.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_301;
    value_08.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_302;
    value_08.timeStamp.currentCryptoKey = uStack_303;
    value_08.timeStamp.hiddenValue.b1 = (undefined1)uStack_304;
    value_08.timeStamp.hiddenValue.b2 = uStack_304._1_1_;
    value_08.timeStamp.hiddenValue.b3 = uStack_304._2_1_;
    value_08.timeStamp.hiddenValue.b4 = uStack_304._3_1_;
    value_08.timeStamp.hiddenValueOld = (Byte__Array *)uStack_305;
    value_08.timeStamp.fakeValue = (float)uStack_306;
    value_08.timeStamp._16_4_ = uStack_307;
    value_08._52_4_ = uStack_308;
    value_08.avatarModifierPackageType = uStack_309;
    value_08.avatarModifierPackageAdditionPolicy = iStack_310;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_WindFriction,value_08,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 6;
    pFVar4 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_311,0);
    func_?(&uStack_311,0x10,1,0x7f800000,iVar1,0,1);
    value_09.duration.currentCryptoKey = uStack_312;
    value_09.id = uStack_311;
    value_09.duration.hiddenValue.b1 = (undefined1)uStack_313;
    value_09.duration.hiddenValue.b2 = uStack_313._1_1_;
    value_09.duration.hiddenValue.b3 = uStack_313._2_1_;
    value_09.duration.hiddenValue.b4 = uStack_313._3_1_;
    value_09.duration.hiddenValueOld = (Byte__Array *)uStack_314;
    value_09.duration.fakeValue = (float)uStack_315;
    value_09.duration._16_4_ = uStack_316;
    value_09.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_317;
    value_09.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_318;
    value_09.timeStamp.currentCryptoKey = uStack_319;
    value_09.timeStamp.hiddenValue.b1 = (undefined1)uStack_320;
    value_09.timeStamp.hiddenValue.b2 = uStack_320._1_1_;
    value_09.timeStamp.hiddenValue.b3 = uStack_320._2_1_;
    value_09.timeStamp.hiddenValue.b4 = uStack_320._3_1_;
    value_09.timeStamp.hiddenValueOld = (Byte__Array *)uStack_321;
    value_09.timeStamp.fakeValue = (float)uStack_322;
    value_09.timeStamp._16_4_ = uStack_323;
    value_09._52_4_ = uStack_324;
    value_09.avatarModifierPackageType = uStack_325;
    value_09.avatarModifierPackageAdditionPolicy = iStack_326;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Shielded,value_09,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 2;
    uStack_3 = 7;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    func_?(&uStack_327,0);
    func_?(&uStack_327,0xe,1,0x7f800000,iVar1,0,0);
    value_10.duration.currentCryptoKey = uStack_328;
    value_10.id = uStack_327;
    value_10.duration.hiddenValue.b1 = (undefined1)uStack_329;
    value_10.duration.hiddenValue.b2 = uStack_329._1_1_;
    value_10.duration.hiddenValue.b3 = uStack_329._2_1_;
    value_10.duration.hiddenValue.b4 = uStack_329._3_1_;
    value_10.duration.hiddenValueOld = (Byte__Array *)uStack_330;
    value_10.duration.fakeValue = (float)uStack_331;
    value_10.duration._16_4_ = uStack_332;
    value_10.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_333;
    value_10.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_334;
    value_10.timeStamp.currentCryptoKey = uStack_335;
    value_10.timeStamp.hiddenValue.b1 = (undefined1)uStack_336;
    value_10.timeStamp.hiddenValue.b2 = uStack_336._1_1_;
    value_10.timeStamp.hiddenValue.b3 = uStack_336._2_1_;
    value_10.timeStamp.hiddenValue.b4 = uStack_336._3_1_;
    value_10.timeStamp.hiddenValueOld = (Byte__Array *)uStack_337;
    value_10.timeStamp.fakeValue = (float)uStack_338;
    value_10.timeStamp._16_4_ = uStack_339;
    value_10._52_4_ = uStack_340;
    value_10.avatarModifierPackageType = uStack_341;
    value_10.avatarModifierPackageAdditionPolicy = iStack_342;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_DisableVehiclePickup,value_10,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
    if (iVar1 == 0) goto code_?;
    uStack_2 = 0;
    uStack_3 = 3;
    pFVar4 = AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 5;
    pFVar4 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 2;
    pFVar4 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
    *(ulonglong *)(iVar1 + 0x28) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x30) = pFVar4;
    uStack_2 = 0;
    uStack_3 = 6;
    pFVar4 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 4) goto code_?;
    *(ulonglong *)(iVar1 + 0x34) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x3c) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 8;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 5) goto code_?;
    *(ulonglong *)(iVar1 + 0x40) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x48) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 9;
    uVar5 = 0x3f800000;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    uVar343 = 0;
    if (*(uint *)(iVar1 + 0xc) < 6) goto code_?;
    *(ulonglong *)(iVar1 + 0x4c) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x54) = pFVar4;
    uStack_2 = 2;
    uStack_3 = 1;
    uVar344 = 0x40000000;
    puVar345 = &UNK_?;
    pFVar4 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
    if (*(uint *)(iVar1 + 0xc) < 7) goto code_?;
    *(ulonglong *)(iVar1 + 0x58) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x60) = pFVar4;
    pDVar346 = 
    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>;
    pDVar118 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar118,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (pDVar118 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_Shrunken,ModifierActions__Enum_CancelOut,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_Enlarged,ModifierActions__Enum_Renew,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    func_?(&uStack_347,0,0x40);
    func_?(&uStack_347);
    value_20.duration.currentCryptoKey = uStack_348;
    value_20.id = uStack_347;
    value_20.duration.hiddenValue.b1 = (undefined1)uStack_349;
    value_20.duration.hiddenValue.b2 = uStack_349._1_1_;
    value_20.duration.hiddenValue.b3 = uStack_349._2_1_;
    value_20.duration.hiddenValue.b4 = uStack_349._3_1_;
    value_20.duration.hiddenValueOld = (Byte__Array *)uStack_350;
    value_20.duration.fakeValue = (float)uStack_351;
    value_20.duration._16_4_ = uStack_352;
    value_20.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_353;
    value_20.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uStack_354;
    value_20.timeStamp.currentCryptoKey = uStack_355;
    value_20.timeStamp.hiddenValue.b1 = (undefined1)uStack_356;
    value_20.timeStamp.hiddenValue.b2 = uStack_356._1_1_;
    value_20.timeStamp.hiddenValue.b3 = uStack_356._2_1_;
    value_20.timeStamp.hiddenValue.b4 = uStack_356._3_1_;
    value_20.timeStamp.hiddenValueOld = (Byte__Array *)uStack_357;
    value_20.timeStamp.fakeValue = (float)uStack_358;
    value_20.timeStamp._16_4_ = uStack_359;
    value_20._52_4_ = uStack_360;
    value_20.avatarModifierPackageType = uStack_361;
    value_20.avatarModifierPackageAdditionPolicy = iStack_362;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_Enlarged,value_20,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    if (cRam_? == '\0') {
      uStack_363 = _UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    uStack_363 = 1;
    pAStack_364 = TypeInfo__AvatarModifierPackage__AvatarModifier;
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarModifierPackageFactory);
    }
    uStack_2 = 2;
    uStack_3 = 10;
    pFVar4 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
    *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
    pDVar118 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar118,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (pDVar118 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
    Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
              (pDVar118,AvatarModifierPackageType__Enum_SpawnProtection,ModifierActions__Enum_Renew,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
              );
    func_?(&uStack_365,0,0x40);
    func_?(&uStack_365,0x11,1,0x40800000,iVar1);
    value_16.duration.currentCryptoKey = uStack_366;
    value_16.id = uStack_365;
    value_16.duration.hiddenValue.b1 = (undefined1)uStack_367;
    value_16.duration.hiddenValue.b2 = uStack_367._1_1_;
    value_16.duration.hiddenValue.b3 = uStack_367._2_1_;
    value_16.duration.hiddenValue.b4 = uStack_367._3_1_;
    value_16.duration.hiddenValueOld = (Byte__Array *)uStack_368;
    value_16.duration.fakeValue = (float)uStack_369;
    value_16.duration._16_4_ = uStack_370;
    value_16.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uStack_371;
    value_16.actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)puStack_372;
    value_16.timeStamp.currentCryptoKey = (int32_t)pAStack_364;
    value_16.timeStamp.hiddenValue.b1 = (undefined1)uStack_363;
    value_16.timeStamp.hiddenValue.b2 = uStack_363._1_1_;
    value_16.timeStamp.hiddenValue.b3 = uStack_363._2_1_;
    value_16.timeStamp.hiddenValue.b4 = uStack_363._3_1_;
    value_16.timeStamp.hiddenValueOld = (Byte__Array *)uStack_373;
    value_16.timeStamp.fakeValue = (float)uStack_374;
    value_16.timeStamp._16_4_ = uStack_375;
    value_16._52_4_ = uStack_376;
    value_16.avatarModifierPackageType = uStack_377;
    value_16.avatarModifierPackageAdditionPolicy = iStack_378;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
    Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
              (this,AvatarModifierPackageType__Enum_SpawnProtection,value_16,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
              );
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    uStack_2 = 1;
    uStack_3 = 0xe;
    pFVar4 = AvatarModifierPackageFactory_Const(-20.0,(MethodInfo *)0x0);
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(ulonglong *)(iVar1 + 0x10) = CONCAT44(uStack_3,uStack_2);
      *(Func_1_Single_ **)(iVar1 + 0x18) = pFVar4;
      uStack_2 = 1;
      uStack_3 = 0x14;
      pFVar4 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
      if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
      *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(uStack_3,uStack_2);
      *(Func_1_Single_ **)(iVar1 + 0x24) = pFVar4;
      pDVar118 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar118,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                );
      if (pDVar118 != (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[AvatarModifierPackageType,ModifierActions]::
        Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
                  (pDVar118,AvatarModifierPackageType__Enum_Poison,ModifierActions__Enum_Replace,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                  );
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[AvatarModifierPackageType,ModifierActions]::
        Dictionary_2_AvatarModifierPackageType_ModifierActions__Add
                  (pDVar118,AvatarModifierPackageType__Enum_Fire,ModifierActions__Enum_Replace,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                  );
        func_?(&stack0xfffff9f0,0,0x40);
        uVar379 = 0;
        uVar380 = 0x3e4ccccd;
        uVar381 = 0;
        uVar382 = 0x12;
        func_?(&stack0xfffff9f0);
        value_21.duration.currentCryptoKey = uVar381;
        value_21.id = uVar382;
        value_21.duration.hiddenValue.b1 = (char)uVar380;
        value_21.duration.hiddenValue.b2 = (char)((uint)uVar380 >> 8);
        value_21.duration.hiddenValue.b3 = (char)((uint)uVar380 >> 0x10);
        value_21.duration.hiddenValue.b4 = (char)((uint)uVar380 >> 0x18);
        value_21.duration.hiddenValueOld = (Byte__Array *)iVar1;
        value_21.duration.fakeValue = (float)pDVar118;
        value_21.duration._16_4_ = uVar379;
        value_21.avatarModifiers =
             (AvatarModifierPackage_AvatarModifier__Array *)
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
        ;
        value_21.actionsToTakeVsTypes =
             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uVar5;
        value_21.timeStamp.currentCryptoKey = (int32_t)puVar345;
        value_21.timeStamp.hiddenValue.b1 = (char)uVar344;
        value_21.timeStamp.hiddenValue.b2 = (char)((uint)uVar344 >> 8);
        value_21.timeStamp.hiddenValue.b3 = (char)((uint)uVar344 >> 0x10);
        value_21.timeStamp.hiddenValue.b4 = (char)((uint)uVar344 >> 0x18);
        value_21.timeStamp.hiddenValueOld = (Byte__Array *)uVar343;
        value_21.timeStamp.fakeValue = (float)&UNK_?;
        value_21.timeStamp._16_4_ = pDVar346;
        value_21._52_4_ = uStack_383;
        value_21.avatarModifierPackageType = uStack_384;
        value_21.avatarModifierPackageAdditionPolicy = iStack_385;
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[AvatarModifierPackageType,AvatarModifierPackage]::
        Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage__Add
                  (this,AvatarModifierPackageType__Enum_RayHeal,value_21,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                  );
        TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages = this;
        return;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  func_?();
  pcVar386 = (code *)swi(3);
  (*pcVar386)();
  return;
}

