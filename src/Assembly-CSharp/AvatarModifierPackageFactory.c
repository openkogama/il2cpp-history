
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
  pinnable = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
  pFVar1 = (Func_1_Single_ *)0x0;
  uStack_2._0_4_ = (Void *)0x0;
  uStack_2._4_4_ = (void *)0x0;
  mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
            ((MemoryHandle *)&uStack_2,(Void *)0x2,(GCHandle)0xa,(IPinnable *)pinnable,
             (MethodInfo *)0x0);
  if (avatarModifiers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if (avatarModifiers->max_length == 0) goto code_?;
    avatarModifiers->vector[0].avatarModifierType = (int32_t)(Void *)uStack_2;
    avatarModifiers->vector[0].avatarModifierEffect = (int32_t)uStack_2._4_4_;
    avatarModifiers->vector[0].value = pFVar1;
    uStack_2._4_4_ = &UNK_?;
    func_?();
    uStack_2._4_4_ =
         TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
    ;
    uStack_2._0_4_ = (Void *)&UNK_?;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                );
      this = 
      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
      ;
      uStack_2._4_4_ = &UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x11,(Object *)0x1,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                );
      func_?();
      AvatarModifierPackage::AvatarModifierPackage__ctor
                ((AvatarModifierPackage *)this,AvatarModifierPackageType__Enum_Fire,
                 AvatarModifierPackageAdditionPolicy__Enum_Renew,time,avatarModifiers,
                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)this_00,1,
                 (MethodInfo *)0x0);
      return (AvatarModifierPackage *)this;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pAVar4 = (AvatarModifierPackage *)(*pcVar3)();
  return pAVar4;
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
  value = (Object *)func_?(TypeInfo__AvatarModifierPackageFactory____c__DisplayClass0_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)c;
    pFVar1 = (Func_1_Single_ *)func_?(TypeInfo__System__Func<float>);
    if (pFVar1 != (Func_1_Single_ *)0x0) {
      mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
                (pFVar1,value,
                 MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__,
                 (MethodInfo *)0x0);
      return pFVar1;
    }
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
                        (&AStack_2,this,packageType,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                        );
    iVar3 = (pAVar1->duration).currentCryptoKey;
    AVar4 = (pAVar1->duration).hiddenValue;
    pBVar5 = (pAVar1->duration).hiddenValueOld;
    iVar6 = pAVar1->avatarModifierPackageAdditionPolicy;
    fVar7 = (pAVar1->duration).fakeValue;
    bVar8 = (pAVar1->duration).inited;
    uVar9 = *(undefined3 *)&(pAVar1->duration).field_0x11;
    pAVar10 = pAVar1->avatarModifiers;
    pDVar11 = pAVar1->actionsToTakeVsTypes;
    iVar12 = (pAVar1->timeStamp).currentCryptoKey;
    AVar13 = (pAVar1->timeStamp).hiddenValue;
    pBVar14 = (pAVar1->timeStamp).hiddenValueOld;
    fVar15 = (pAVar1->timeStamp).fakeValue;
    bVar16 = (pAVar1->timeStamp).inited;
    uVar17 = *(undefined3 *)&(pAVar1->timeStamp).field_0x11;
    bVar18 = pAVar1->persistant;
    uVar19 = *(undefined3 *)&pAVar1->field_0x35;
    fVar20 = pAVar1->lastTimeStamp;
    iVar21 = pAVar1->avatarModifierPackageType;
    __return_storage_ptr__->id = pAVar1->id;
    (__return_storage_ptr__->duration).currentCryptoKey = iVar3;
    (__return_storage_ptr__->duration).hiddenValue = AVar4;
    (__return_storage_ptr__->duration).hiddenValueOld = pBVar5;
    (__return_storage_ptr__->duration).fakeValue = fVar7;
    (__return_storage_ptr__->duration).inited = bVar8;
    *(undefined3 *)&(__return_storage_ptr__->duration).field_0x11 = uVar9;
    __return_storage_ptr__->avatarModifiers = pAVar10;
    __return_storage_ptr__->actionsToTakeVsTypes = pDVar11;
    (__return_storage_ptr__->timeStamp).currentCryptoKey = iVar12;
    (__return_storage_ptr__->timeStamp).hiddenValue = AVar13;
    (__return_storage_ptr__->timeStamp).hiddenValueOld = pBVar14;
    (__return_storage_ptr__->timeStamp).fakeValue = fVar15;
    (__return_storage_ptr__->timeStamp).inited = bVar16;
    *(undefined3 *)&(__return_storage_ptr__->timeStamp).field_0x11 = uVar17;
    __return_storage_ptr__->persistant = bVar18;
    *(undefined3 *)&__return_storage_ptr__->field_0x35 = uVar19;
    __return_storage_ptr__->lastTimeStamp = fVar20;
    __return_storage_ptr__->avatarModifierPackageType = iVar21;
    __return_storage_ptr__->avatarModifierPackageAdditionPolicy = iVar6;
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
  if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
              );
    pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
             func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,1);
    pFVar2 = AvatarModifierPackageFactory_Const(10.0,(MethodInfo *)0x0);
    MStack_3._pinnable = (IPinnable *)0x0;
    MStack_3._pointer = (Void *)0x0;
    MStack_3._handle.handle = (void *)0x0;
    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
              (&MStack_3,(Void *)0x1,(GCHandle)0xe,(IPinnable *)pFVar2,(MethodInfo *)0x0);
    if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      if (pAVar1->max_length == 0) goto code_?;
      pAVar1->vector[0].avatarModifierType = (int32_t)MStack_3._pointer;
      pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_3._handle.handle;
      pAVar1->vector[0].value = (Func_1_Single_ *)MStack_3._pinnable;
      func_?(&pAVar1->vector[0].value,0);
      func_?(&AStack_4,0,0x44);
      AvatarModifierPackage::AvatarModifierPackage__ctor
                (&AStack_4,AvatarModifierPackageType__Enum_Fire,
                 AvatarModifierPackageAdditionPolicy__Enum_Renew,1.0,pAVar1,
                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0)
      ;
      value.duration.currentCryptoKey = AStack_4.duration.currentCryptoKey;
      value.id = AStack_4.id;
      value.duration.hiddenValue = AStack_4.duration.hiddenValue;
      value.duration.hiddenValueOld = AStack_4.duration.hiddenValueOld;
      value.duration.fakeValue = AStack_4.duration.fakeValue;
      value.duration.inited = AStack_4.duration.inited;
      value.duration._17_3_ = AStack_4.duration._17_3_;
      value.avatarModifiers = AStack_4.avatarModifiers;
      value.actionsToTakeVsTypes = AStack_4.actionsToTakeVsTypes;
      value.timeStamp.currentCryptoKey = AStack_4.timeStamp.currentCryptoKey;
      value.timeStamp.hiddenValue = AStack_4.timeStamp.hiddenValue;
      value.timeStamp.hiddenValueOld = AStack_4.timeStamp.hiddenValueOld;
      value.timeStamp.fakeValue = AStack_4.timeStamp.fakeValue;
      value.timeStamp.inited = AStack_4.timeStamp.inited;
      value.timeStamp._17_3_ = AStack_4.timeStamp._17_3_;
      value.persistant = AStack_4.persistant;
      value._53_3_ = AStack_4._53_3_;
      value.lastTimeStamp = AStack_4.lastTimeStamp;
      value.avatarModifierPackageType = AStack_4.avatarModifierPackageType;
      value.avatarModifierPackageAdditionPolicy = AStack_4.avatarModifierPackageAdditionPolicy;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                (this,1,value,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                );
      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
      pFVar2 = AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
      MStack_5._pinnable = (IPinnable *)0x0;
      MStack_5._pointer = (Void *)0x0;
      MStack_5._handle.handle = (void *)0x0;
      mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                (&MStack_5,(Void *)0x0,(GCHandle)0x2,(IPinnable *)pFVar2,(MethodInfo *)0x0);
      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
        if (pAVar1->max_length == 0) goto code_?;
        pAVar1->vector[0].avatarModifierType = (int32_t)MStack_5._pointer;
        pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_5._handle.handle;
        pAVar1->vector[0].value = (Func_1_Single_ *)MStack_5._pinnable;
        func_?(&pAVar1->vector[0].value,0);
        pFVar2 = AvatarModifierPackageFactory_Const(1.25,(MethodInfo *)0x0);
        MStack_6._pinnable = (IPinnable *)0x0;
        MStack_6._pointer = (Void *)0x0;
        MStack_6._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_6,(Void *)0x0,(GCHandle)0x3,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1->max_length < 2) goto code_?;
        pAVar1->vector[1].avatarModifierType = (int32_t)MStack_6._pointer;
        pAVar1->vector[1].avatarModifierEffect = (int32_t)MStack_6._handle.handle;
        pAVar1->vector[1].value = (Func_1_Single_ *)MStack_6._pinnable;
        func_?(&pAVar1->vector[1].value,0);
        pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        MStack_7._pinnable = (IPinnable *)0x0;
        MStack_7._pointer = (Void *)0x0;
        MStack_7._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_7,(Void *)0x2,(GCHandle)0x7,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1->max_length < 3) goto code_?;
        pAVar1->vector[2].avatarModifierType = (int32_t)MStack_7._pointer;
        pAVar1->vector[2].avatarModifierEffect = (int32_t)MStack_7._handle.handle;
        pAVar1->vector[2].value = (Func_1_Single_ *)MStack_7._pinnable;
        func_?(&pAVar1->vector[2].value,0);
        pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        MStack_8._pinnable = (IPinnable *)0x0;
        MStack_8._pointer = (Void *)0x0;
        MStack_8._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_8,(Void *)0x2,(GCHandle)0x9,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1->max_length < 4) goto code_?;
        pAVar1->vector[3].avatarModifierType = (int32_t)MStack_8._pointer;
        pAVar1->vector[3].avatarModifierEffect = (int32_t)MStack_8._handle.handle;
        pAVar1->vector[3].value = (Func_1_Single_ *)MStack_8._pinnable;
        func_?(&pAVar1->vector[3].value,0);
        pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        MStack_9._pinnable = (IPinnable *)0x0;
        MStack_9._pointer = (Void *)0x0;
        MStack_9._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_9,(Void *)0x2,(GCHandle)0xb,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1->max_length < 5) goto code_?;
        pAVar1->vector[4].avatarModifierType = (int32_t)MStack_9._pointer;
        pAVar1->vector[4].avatarModifierEffect = (int32_t)MStack_9._handle.handle;
        pAVar1->vector[4].value = (Func_1_Single_ *)MStack_9._pinnable;
        func_?(&pAVar1->vector[4].value,0);
        pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
        MStack_10._pinnable = (IPinnable *)0x0;
        MStack_10._pointer = (Void *)0x0;
        MStack_10._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_10,(Void *)0x2,(GCHandle)0xa,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1->max_length < 6) goto code_?;
        pAVar1->vector[5].avatarModifierType = (int32_t)MStack_10._pointer;
        pAVar1->vector[5].avatarModifierEffect = (int32_t)MStack_10._handle.handle;
        pAVar1->vector[5].value = (Func_1_Single_ *)MStack_10._pinnable;
        func_?(&pAVar1->vector[5].value,0);
        func_?(&AStack_11,0,0x44);
        AvatarModifierPackage::AvatarModifierPackage__ctor
                  (&AStack_11,AvatarModifierPackageType__Enum_Mutant,
                   AvatarModifierPackageAdditionPolicy__Enum_Renew,20.0,pAVar1,
                   (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                   (MethodInfo *)0x0);
        value_00.duration.currentCryptoKey = AStack_11.duration.currentCryptoKey;
        value_00.id = AStack_11.id;
        value_00.duration.hiddenValue = AStack_11.duration.hiddenValue;
        value_00.duration.hiddenValueOld = AStack_11.duration.hiddenValueOld;
        value_00.duration.fakeValue = AStack_11.duration.fakeValue;
        value_00.duration.inited = AStack_11.duration.inited;
        value_00.duration._17_3_ = AStack_11.duration._17_3_;
        value_00.avatarModifiers = AStack_11.avatarModifiers;
        value_00.actionsToTakeVsTypes = AStack_11.actionsToTakeVsTypes;
        value_00.timeStamp.currentCryptoKey = AStack_11.timeStamp.currentCryptoKey;
        value_00.timeStamp.hiddenValue = AStack_11.timeStamp.hiddenValue;
        value_00.timeStamp.hiddenValueOld = AStack_11.timeStamp.hiddenValueOld;
        value_00.timeStamp.fakeValue = AStack_11.timeStamp.fakeValue;
        value_00.timeStamp.inited = AStack_11.timeStamp.inited;
        value_00.timeStamp._17_3_ = AStack_11.timeStamp._17_3_;
        value_00.persistant = AStack_11.persistant;
        value_00._53_3_ = AStack_11._53_3_;
        value_00.lastTimeStamp = AStack_11.lastTimeStamp;
        value_00.avatarModifierPackageType = AStack_11.avatarModifierPackageType;
        value_00.avatarModifierPackageAdditionPolicy =
             AStack_11.avatarModifierPackageAdditionPolicy;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                  (this,2,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                  );
        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
        pFVar2 = AvatarModifierPackageFactory_Const(0.01,(MethodInfo *)0x0);
        MStack_12._pinnable = (IPinnable *)0x0;
        MStack_12._pointer = (Void *)0x0;
        MStack_12._handle.handle = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  (&MStack_12,(Void *)0x0,(GCHandle)0x2,(IPinnable *)pFVar2,(MethodInfo *)0x0);
        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
          if (pAVar1->max_length == 0) goto code_?;
          pAVar1->vector[0].avatarModifierType = (int32_t)MStack_12._pointer;
          pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_12._handle.handle;
          pAVar1->vector[0].value = (Func_1_Single_ *)MStack_12._pinnable;
          func_?(&pAVar1->vector[0].value,0);
          pFVar2 = AvatarModifierPackageFactory_Const(0.03,(MethodInfo *)0x0);
          MStack_13._pinnable = (IPinnable *)0x0;
          MStack_13._pointer = (Void *)0x0;
          MStack_13._handle.handle = (void *)0x0;
          mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                    (&MStack_13,(Void *)0x0,(GCHandle)0x3,(IPinnable *)pFVar2,(MethodInfo *)0x0);
          if (pAVar1->max_length < 2) goto code_?;
          pAVar1->vector[1].avatarModifierType = (int32_t)MStack_13._pointer;
          pAVar1->vector[1].avatarModifierEffect = (int32_t)MStack_13._handle.handle;
          pAVar1->vector[1].value = (Func_1_Single_ *)MStack_13._pinnable;
          func_?(&pAVar1->vector[1].value,0);
          pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
          MStack_14._pinnable = (IPinnable *)0x0;
          MStack_14._pointer = (Void *)0x0;
          MStack_14._handle.handle = (void *)0x0;
          mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                    (&MStack_14,(Void *)0x2,(GCHandle)0xc,(IPinnable *)pFVar2,(MethodInfo *)0x0);
          if (pAVar1->max_length < 3) goto code_?;
          pAVar1->vector[2].avatarModifierType = (int32_t)MStack_14._pointer;
          pAVar1->vector[2].avatarModifierEffect = (int32_t)MStack_14._handle.handle;
          pAVar1->vector[2].value = (Func_1_Single_ *)MStack_14._pinnable;
          func_?(&pAVar1->vector[2].value,0);
          func_?(&AStack_15,0,0x44);
          AvatarModifierPackage::AvatarModifierPackage__ctor
                    (&AStack_15,AvatarModifierPackageType__Enum_Sticky,
                     AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                     (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                     (MethodInfo *)0x0);
          value_01.duration.currentCryptoKey = AStack_15.duration.currentCryptoKey;
          value_01.id = AStack_15.id;
          value_01.duration.hiddenValue = AStack_15.duration.hiddenValue;
          value_01.duration.hiddenValueOld = AStack_15.duration.hiddenValueOld;
          value_01.duration.fakeValue = AStack_15.duration.fakeValue;
          value_01.duration.inited = AStack_15.duration.inited;
          value_01.duration._17_3_ = AStack_15.duration._17_3_;
          value_01.avatarModifiers = AStack_15.avatarModifiers;
          value_01.actionsToTakeVsTypes = AStack_15.actionsToTakeVsTypes;
          value_01.timeStamp.currentCryptoKey = AStack_15.timeStamp.currentCryptoKey;
          value_01.timeStamp.hiddenValue = AStack_15.timeStamp.hiddenValue;
          value_01.timeStamp.hiddenValueOld = AStack_15.timeStamp.hiddenValueOld;
          value_01.timeStamp.fakeValue = AStack_15.timeStamp.fakeValue;
          value_01.timeStamp.inited = AStack_15.timeStamp.inited;
          value_01.timeStamp._17_3_ = AStack_15.timeStamp._17_3_;
          value_01.persistant = AStack_15.persistant;
          value_01._53_3_ = AStack_15._53_3_;
          value_01.lastTimeStamp = AStack_15.lastTimeStamp;
          value_01.avatarModifierPackageType = AStack_15.avatarModifierPackageType;
          value_01.avatarModifierPackageAdditionPolicy =
               AStack_15.avatarModifierPackageAdditionPolicy;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                    (this,3,value_01,
                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                    );
          pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
          pFVar2 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
          MStack_16._pinnable = (IPinnable *)0x0;
          MStack_16._pointer = (Void *)0x0;
          MStack_16._handle.handle = (void *)0x0;
          mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                    (&MStack_16,(Void *)0x0,(GCHandle)0x2,(IPinnable *)pFVar2,(MethodInfo *)0x0);
          if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
            if (pAVar1->max_length == 0) goto code_?;
            pAVar1->vector[0].avatarModifierType = (int32_t)MStack_16._pointer;
            pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_16._handle.handle;
            pAVar1->vector[0].value = (Func_1_Single_ *)MStack_16._pinnable;
            func_?(&pAVar1->vector[0].value,0);
            pFVar2 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
            MStack_17._pinnable = (IPinnable *)0x0;
            MStack_17._pointer = (Void *)0x0;
            MStack_17._handle.handle = (void *)0x0;
            mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                      (&MStack_17,(Void *)0x0,(GCHandle)0x3,(IPinnable *)pFVar2,(MethodInfo *)0x0);
            if (pAVar1->max_length < 2) goto code_?;
            pAVar1->vector[1].avatarModifierType = (int32_t)MStack_17._pointer;
            pAVar1->vector[1].avatarModifierEffect = (int32_t)MStack_17._handle.handle;
            pAVar1->vector[1].value = (Func_1_Single_ *)MStack_17._pinnable;
            func_?(&pAVar1->vector[1].value,0);
            func_?(&AStack_18,0,0x44);
            AvatarModifierPackage::AvatarModifierPackage__ctor
                      (&AStack_18,AvatarModifierPackageType__Enum_SlowMat,
                       AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                       (MethodInfo *)0x0);
            value_02.duration.currentCryptoKey = AStack_18.duration.currentCryptoKey;
            value_02.id = AStack_18.id;
            value_02.duration.hiddenValue = AStack_18.duration.hiddenValue;
            value_02.duration.hiddenValueOld = AStack_18.duration.hiddenValueOld;
            value_02.duration.fakeValue = AStack_18.duration.fakeValue;
            value_02.duration.inited = AStack_18.duration.inited;
            value_02.duration._17_3_ = AStack_18.duration._17_3_;
            value_02.avatarModifiers = AStack_18.avatarModifiers;
            value_02.actionsToTakeVsTypes = AStack_18.actionsToTakeVsTypes;
            value_02.timeStamp.currentCryptoKey = AStack_18.timeStamp.currentCryptoKey;
            value_02.timeStamp.hiddenValue = AStack_18.timeStamp.hiddenValue;
            value_02.timeStamp.hiddenValueOld = AStack_18.timeStamp.hiddenValueOld;
            value_02.timeStamp.fakeValue = AStack_18.timeStamp.fakeValue;
            value_02.timeStamp.inited = AStack_18.timeStamp.inited;
            value_02.timeStamp._17_3_ = AStack_18.timeStamp._17_3_;
            value_02.persistant = AStack_18.persistant;
            value_02._53_3_ = AStack_18._53_3_;
            value_02.lastTimeStamp = AStack_18.lastTimeStamp;
            value_02.avatarModifierPackageType = AStack_18.avatarModifierPackageType;
            value_02.avatarModifierPackageAdditionPolicy =
                 AStack_18.avatarModifierPackageAdditionPolicy;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,AvatarModifierPackage]::
            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                      (this,0x16,value_02,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                      );
            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
            pFVar2 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
            MStack_19._pinnable = (IPinnable *)0x0;
            MStack_19._pointer = (Void *)0x0;
            MStack_19._handle.handle = (void *)0x0;
            mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                      (&MStack_19,(Void *)0x0,(GCHandle)0x3,(IPinnable *)pFVar2,(MethodInfo *)0x0);
            if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
              if (pAVar1->max_length == 0) goto code_?;
              pAVar1->vector[0].avatarModifierType = (int32_t)MStack_19._pointer;
              pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_19._handle.handle;
              pAVar1->vector[0].value = (Func_1_Single_ *)MStack_19._pinnable;
              func_?(&pAVar1->vector[0].value,0);
              pFVar2 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
              MStack_20._pinnable = (IPinnable *)0x0;
              MStack_20._pointer = (Void *)0x0;
              MStack_20._handle.handle = (void *)0x0;
              mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                        (&MStack_20,(Void *)0x0,(GCHandle)0x13,(IPinnable *)pFVar2,(MethodInfo *)0x0
                        );
              if (pAVar1->max_length < 2) goto code_?;
              pAVar1->vector[1].avatarModifierType = (int32_t)MStack_20._pointer;
              pAVar1->vector[1].avatarModifierEffect = (int32_t)MStack_20._handle.handle;
              pAVar1->vector[1].value = (Func_1_Single_ *)MStack_20._pinnable;
              func_?(&pAVar1->vector[1].value,0);
              func_?(&AStack_21,0,0x44);
              AvatarModifierPackage::AvatarModifierPackage__ctor
                        (&AStack_21,AvatarModifierPackageType__Enum_SpeedMat,
                         AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                         (MethodInfo *)0x0);
              value_03.duration.currentCryptoKey = AStack_21.duration.currentCryptoKey;
              value_03.id = AStack_21.id;
              value_03.duration.hiddenValue = AStack_21.duration.hiddenValue;
              value_03.duration.hiddenValueOld = AStack_21.duration.hiddenValueOld;
              value_03.duration.fakeValue = AStack_21.duration.fakeValue;
              value_03.duration.inited = AStack_21.duration.inited;
              value_03.duration._17_3_ = AStack_21.duration._17_3_;
              value_03.avatarModifiers = AStack_21.avatarModifiers;
              value_03.actionsToTakeVsTypes = AStack_21.actionsToTakeVsTypes;
              value_03.timeStamp.currentCryptoKey = AStack_21.timeStamp.currentCryptoKey;
              value_03.timeStamp.hiddenValue = AStack_21.timeStamp.hiddenValue;
              value_03.timeStamp.hiddenValueOld = AStack_21.timeStamp.hiddenValueOld;
              value_03.timeStamp.fakeValue = AStack_21.timeStamp.fakeValue;
              value_03.timeStamp.inited = AStack_21.timeStamp.inited;
              value_03.timeStamp._17_3_ = AStack_21.timeStamp._17_3_;
              value_03.persistant = AStack_21.persistant;
              value_03._53_3_ = AStack_21._53_3_;
              value_03.lastTimeStamp = AStack_21.lastTimeStamp;
              value_03.avatarModifierPackageType = AStack_21.avatarModifierPackageType;
              value_03.avatarModifierPackageAdditionPolicy =
                   AStack_21.avatarModifierPackageAdditionPolicy;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,AvatarModifierPackage]::
              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                        (this,0x17,value_03,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                        );
              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
              pFVar2 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
              MStack_22._pinnable = (IPinnable *)0x0;
              MStack_22._pointer = (Void *)0x0;
              MStack_22._handle.handle = (void *)0x0;
              mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                        (&MStack_22,(Void *)0x2,(GCHandle)0x1a,(IPinnable *)pFVar2,(MethodInfo *)0x0
                        );
              if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                if (pAVar1->max_length == 0) goto code_?;
                pAVar1->vector[0].avatarModifierType = (int32_t)MStack_22._pointer;
                pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_22._handle.handle;
                pAVar1->vector[0].value = (Func_1_Single_ *)MStack_22._pinnable;
                func_?(&pAVar1->vector[0].value,0);
                func_?(&AStack_23,0,0x44);
                AvatarModifierPackage::AvatarModifierPackage__ctor
                          (&AStack_23,AvatarModifierPackageType__Enum_CrumbleMat,
                           AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                           (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                           (MethodInfo *)0x0);
                value_04.duration.currentCryptoKey = AStack_23.duration.currentCryptoKey;
                value_04.id = AStack_23.id;
                value_04.duration.hiddenValue = AStack_23.duration.hiddenValue;
                value_04.duration.hiddenValueOld = AStack_23.duration.hiddenValueOld;
                value_04.duration.fakeValue = AStack_23.duration.fakeValue;
                value_04.duration.inited = AStack_23.duration.inited;
                value_04.duration._17_3_ = AStack_23.duration._17_3_;
                value_04.avatarModifiers = AStack_23.avatarModifiers;
                value_04.actionsToTakeVsTypes = AStack_23.actionsToTakeVsTypes;
                value_04.timeStamp.currentCryptoKey = AStack_23.timeStamp.currentCryptoKey;
                value_04.timeStamp.hiddenValue = AStack_23.timeStamp.hiddenValue;
                value_04.timeStamp.hiddenValueOld = AStack_23.timeStamp.hiddenValueOld;
                value_04.timeStamp.fakeValue = AStack_23.timeStamp.fakeValue;
                value_04.timeStamp.inited = AStack_23.timeStamp.inited;
                value_04.timeStamp._17_3_ = AStack_23.timeStamp._17_3_;
                value_04.persistant = AStack_23.persistant;
                value_04._53_3_ = AStack_23._53_3_;
                value_04.lastTimeStamp = AStack_23.lastTimeStamp;
                value_04.avatarModifierPackageType = AStack_23.avatarModifierPackageType;
                value_04.avatarModifierPackageAdditionPolicy =
                     AStack_23.avatarModifierPackageAdditionPolicy;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,AvatarModifierPackage]::
                Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                          (this,0x18,value_04,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                          );
                pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                pFVar2 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
                MStack_24._pinnable = (IPinnable *)0x0;
                MStack_24._pointer = (Void *)0x0;
                MStack_24._handle.handle = (void *)0x0;
                mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                          (&MStack_24,(Void *)0x1,(GCHandle)0x15,(IPinnable *)pFVar2,
                           (MethodInfo *)0x0);
                if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                  if (pAVar1->max_length == 0) goto code_?;
                  pAVar1->vector[0].avatarModifierType = (int32_t)MStack_24._pointer;
                  pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_24._handle.handle;
                  pAVar1->vector[0].value = (Func_1_Single_ *)MStack_24._pinnable;
                  func_?(&pAVar1->vector[0].value,0);
                  func_?(&AStack_25,0,0x44);
                  AvatarModifierPackage::AvatarModifierPackage__ctor
                            (&AStack_25,AvatarModifierPackageType__Enum_Poison,
                             AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1,
                             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                             (MethodInfo *)0x0);
                  value_05.duration.currentCryptoKey = AStack_25.duration.currentCryptoKey;
                  value_05.id = AStack_25.id;
                  value_05.duration.hiddenValue = AStack_25.duration.hiddenValue;
                  value_05.duration.hiddenValueOld = AStack_25.duration.hiddenValueOld;
                  value_05.duration.fakeValue = AStack_25.duration.fakeValue;
                  value_05.duration.inited = AStack_25.duration.inited;
                  value_05.duration._17_3_ = AStack_25.duration._17_3_;
                  value_05.avatarModifiers = AStack_25.avatarModifiers;
                  value_05.actionsToTakeVsTypes = AStack_25.actionsToTakeVsTypes;
                  value_05.timeStamp.currentCryptoKey = AStack_25.timeStamp.currentCryptoKey;
                  value_05.timeStamp.hiddenValue = AStack_25.timeStamp.hiddenValue;
                  value_05.timeStamp.hiddenValueOld = AStack_25.timeStamp.hiddenValueOld;
                  value_05.timeStamp.fakeValue = AStack_25.timeStamp.fakeValue;
                  value_05.timeStamp.inited = AStack_25.timeStamp.inited;
                  value_05.timeStamp._17_3_ = AStack_25.timeStamp._17_3_;
                  value_05.persistant = AStack_25.persistant;
                  value_05._53_3_ = AStack_25._53_3_;
                  value_05.lastTimeStamp = AStack_25.lastTimeStamp;
                  value_05.avatarModifierPackageType = AStack_25.avatarModifierPackageType;
                  value_05.avatarModifierPackageAdditionPolicy =
                       AStack_25.avatarModifierPackageAdditionPolicy;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32Enum,AvatarModifierPackage]::
                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                            (this,4,value_05,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                            );
                  pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                  pFVar2 = AvatarModifierPackageFactory_Const(-2.0,(MethodInfo *)0x0);
                  MStack_26._pinnable = (IPinnable *)0x0;
                  MStack_26._pointer = (Void *)0x0;
                  MStack_26._handle.handle = (void *)0x0;
                  mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                            (&MStack_26,(Void *)0x1,(GCHandle)0xe,(IPinnable *)pFVar2,
                             (MethodInfo *)0x0);
                  if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                    if (pAVar1->max_length == 0) goto code_?;
                    pAVar1->vector[0].avatarModifierType = (int32_t)MStack_26._pointer;
                    pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_26._handle.handle;
                    pAVar1->vector[0].value = (Func_1_Single_ *)MStack_26._pinnable;
                    func_?(&pAVar1->vector[0].value,0);
                    pFVar2 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                    MStack_27._pinnable = (IPinnable *)0x0;
                    MStack_27._pointer = (Void *)0x0;
                    MStack_27._handle.handle = (void *)0x0;
                    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                              (&MStack_27,(Void *)0x1,(GCHandle)0x14,(IPinnable *)pFVar2,
                               (MethodInfo *)0x0);
                    if (pAVar1->max_length < 2) goto code_?;
                    pAVar1->vector[1].avatarModifierType = (int32_t)MStack_27._pointer;
                    pAVar1->vector[1].avatarModifierEffect = (int32_t)MStack_27._handle.handle;
                    pAVar1->vector[1].value = (Func_1_Single_ *)MStack_27._pinnable;
                    func_?(&pAVar1->vector[1].value,0);
                    pDVar28 = (Dictionary_2_System_Object_System_Object_ *)
                             func_?(
                                            TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                            );
                    if (pDVar28 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                                ((ParameterOverride_1_System_Object_ *)pDVar28,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar28,(Object *)0x4,(Object *)0x2,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                );
                      func_?(&AStack_29,0,0x44);
                      AvatarModifierPackage::AvatarModifierPackage__ctor
                                (&AStack_29,AvatarModifierPackageType__Enum_HealingMat,
                                 AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar1,
                                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar28,0
                                 ,(MethodInfo *)0x0);
                      value_19.duration.currentCryptoKey = AStack_29.duration.currentCryptoKey;
                      value_19.id = AStack_29.id;
                      value_19.duration.hiddenValue = AStack_29.duration.hiddenValue;
                      value_19.duration.hiddenValueOld = AStack_29.duration.hiddenValueOld;
                      value_19.duration.fakeValue = AStack_29.duration.fakeValue;
                      value_19.duration.inited = AStack_29.duration.inited;
                      value_19.duration._17_3_ = AStack_29.duration._17_3_;
                      value_19.avatarModifiers = AStack_29.avatarModifiers;
                      value_19.actionsToTakeVsTypes = AStack_29.actionsToTakeVsTypes;
                      value_19.timeStamp.currentCryptoKey = AStack_29.timeStamp.currentCryptoKey;
                      value_19.timeStamp.hiddenValue = AStack_29.timeStamp.hiddenValue;
                      value_19.timeStamp.hiddenValueOld = AStack_29.timeStamp.hiddenValueOld;
                      value_19.timeStamp.fakeValue = AStack_29.timeStamp.fakeValue;
                      value_19.timeStamp.inited = AStack_29.timeStamp.inited;
                      value_19.timeStamp._17_3_ = AStack_29.timeStamp._17_3_;
                      value_19.persistant = AStack_29.persistant;
                      value_19._53_3_ = AStack_29._53_3_;
                      value_19.lastTimeStamp = AStack_29.lastTimeStamp;
                      value_19.avatarModifierPackageType = AStack_29.avatarModifierPackageType;
                      value_19.avatarModifierPackageAdditionPolicy =
                           AStack_29.avatarModifierPackageAdditionPolicy;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,AvatarModifierPackage]::
                      Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                (this,0x15,value_19,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                );
                      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                      pFVar2 = AvatarModifierPackageFactory_Const(500.0,(MethodInfo *)0x0);
                      MStack_30._pinnable = (IPinnable *)0x0;
                      MStack_30._pointer = (Void *)0x0;
                      MStack_30._handle.handle = (void *)0x0;
                      mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                (&MStack_30,(Void *)0x1,(GCHandle)0x16,(IPinnable *)pFVar2,
                                 (MethodInfo *)0x0);
                      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                        if (pAVar1->max_length == 0) goto code_?;
                        pAVar1->vector[0].avatarModifierType = (int32_t)MStack_30._pointer;
                        pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_30._handle.handle;
                        pAVar1->vector[0].value = (Func_1_Single_ *)MStack_30._pinnable;
                        func_?(&pAVar1->vector[0].value,0);
                        func_?(&AStack_31,0,0x44);
                        AvatarModifierPackage::AvatarModifierPackage__ctor
                                  (&AStack_31,AvatarModifierPackageType__Enum_Lethal,
                                   AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1,
                                   (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                                   (MethodInfo *)0x0);
                        value_06.duration.currentCryptoKey = AStack_31.duration.currentCryptoKey;
                        value_06.id = AStack_31.id;
                        value_06.duration.hiddenValue = AStack_31.duration.hiddenValue;
                        value_06.duration.hiddenValueOld = AStack_31.duration.hiddenValueOld;
                        value_06.duration.fakeValue = AStack_31.duration.fakeValue;
                        value_06.duration.inited = AStack_31.duration.inited;
                        value_06.duration._17_3_ = AStack_31.duration._17_3_;
                        value_06.avatarModifiers = AStack_31.avatarModifiers;
                        value_06.actionsToTakeVsTypes = AStack_31.actionsToTakeVsTypes;
                        value_06.timeStamp.currentCryptoKey = AStack_31.timeStamp.currentCryptoKey;
                        value_06.timeStamp.hiddenValue = AStack_31.timeStamp.hiddenValue;
                        value_06.timeStamp.hiddenValueOld = AStack_31.timeStamp.hiddenValueOld;
                        value_06.timeStamp.fakeValue = AStack_31.timeStamp.fakeValue;
                        value_06.timeStamp.inited = AStack_31.timeStamp.inited;
                        value_06.timeStamp._17_3_ = AStack_31.timeStamp._17_3_;
                        value_06.persistant = AStack_31.persistant;
                        value_06._53_3_ = AStack_31._53_3_;
                        value_06.lastTimeStamp = AStack_31.lastTimeStamp;
                        value_06.avatarModifierPackageType = AStack_31.avatarModifierPackageType;
                        value_06.avatarModifierPackageAdditionPolicy =
                             AStack_31.avatarModifierPackageAdditionPolicy;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,AvatarModifierPackage]::
                        Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                  (this,0x14,value_06,
                                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                  );
                        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                        pFVar2 = AvatarModifierPackageFactory_Const(150.0,(MethodInfo *)0x0);
                        MStack_32._pinnable = (IPinnable *)0x0;
                        MStack_32._pointer = (Void *)0x0;
                        MStack_32._handle.handle = (void *)0x0;
                        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                  (&MStack_32,(Void *)0x1,(GCHandle)0xe,(IPinnable *)pFVar2,
                                   (MethodInfo *)0x0);
                        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                          if (pAVar1->max_length == 0) goto code_?;
                          pAVar1->vector[0].avatarModifierType = (int32_t)MStack_32._pointer;
                          pAVar1->vector[0].avatarModifierEffect = (int32_t)MStack_32._handle.handle
                          ;
                          pAVar1->vector[0].value = (Func_1_Single_ *)MStack_32._pinnable;
                          func_?(&pAVar1->vector[0].value,0);
                          func_?(&AStack_33,0,0x44);
                          AvatarModifierPackage::AvatarModifierPackage__ctor
                                    (&AStack_33,AvatarModifierPackageType__Enum_InstantDeath,
                                     AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar1
                                     ,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0
                                     ,0,(MethodInfo *)0x0);
                          value_07.duration.currentCryptoKey = AStack_33.duration.currentCryptoKey;
                          value_07.id = AStack_33.id;
                          value_07.duration.hiddenValue = AStack_33.duration.hiddenValue;
                          value_07.duration.hiddenValueOld = AStack_33.duration.hiddenValueOld;
                          value_07.duration.fakeValue = AStack_33.duration.fakeValue;
                          value_07.duration.inited = AStack_33.duration.inited;
                          value_07.duration._17_3_ = AStack_33.duration._17_3_;
                          value_07.avatarModifiers = AStack_33.avatarModifiers;
                          value_07.actionsToTakeVsTypes = AStack_33.actionsToTakeVsTypes;
                          value_07.timeStamp.currentCryptoKey =
                               AStack_33.timeStamp.currentCryptoKey;
                          value_07.timeStamp.hiddenValue = AStack_33.timeStamp.hiddenValue;
                          value_07.timeStamp.hiddenValueOld = AStack_33.timeStamp.hiddenValueOld;
                          value_07.timeStamp.fakeValue = AStack_33.timeStamp.fakeValue;
                          value_07.timeStamp.inited = AStack_33.timeStamp.inited;
                          value_07.timeStamp._17_3_ = AStack_33.timeStamp._17_3_;
                          value_07.persistant = AStack_33.persistant;
                          value_07._53_3_ = AStack_33._53_3_;
                          value_07.lastTimeStamp = AStack_33.lastTimeStamp;
                          value_07.avatarModifierPackageType = AStack_33.avatarModifierPackageType;
                          value_07.avatarModifierPackageAdditionPolicy =
                               AStack_33.avatarModifierPackageAdditionPolicy;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,AvatarModifierPackage]::
                          Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                    (this,6,value_07,
                                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                    );
                          pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
                          pFVar2 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                          MStack_34._pinnable = (IPinnable *)0x0;
                          MStack_34._pointer = (Void *)0x0;
                          MStack_34._handle.handle = (void *)0x0;
                          mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                    (&MStack_34,(Void *)0x2,(GCHandle)0x11,(IPinnable *)pFVar2,
                                     (MethodInfo *)0x0);
                          if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                            if (pAVar1->max_length == 0) goto code_?;
                            pAVar1->vector[0].avatarModifierType = (int32_t)MStack_34._pointer;
                            pAVar1->vector[0].avatarModifierEffect =
                                 (int32_t)MStack_34._handle.handle;
                            pAVar1->vector[0].value = (Func_1_Single_ *)MStack_34._pinnable;
                            func_?(&pAVar1->vector[0].value,0);
                            func_?(&AStack_35,0,0x44);
                            AvatarModifierPackage::AvatarModifierPackage__ctor
                                      (&AStack_35,AvatarModifierPackageType__Enum_WallJump,
                                       AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar1,
                                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                       0x0,0,(MethodInfo *)0x0);
                            value_08.duration.currentCryptoKey =
                                 AStack_35.duration.currentCryptoKey;
                            value_08.id = AStack_35.id;
                            value_08.duration.hiddenValue = AStack_35.duration.hiddenValue;
                            value_08.duration.hiddenValueOld = AStack_35.duration.hiddenValueOld;
                            value_08.duration.fakeValue = AStack_35.duration.fakeValue;
                            value_08.duration.inited = AStack_35.duration.inited;
                            value_08.duration._17_3_ = AStack_35.duration._17_3_;
                            value_08.avatarModifiers = AStack_35.avatarModifiers;
                            value_08.actionsToTakeVsTypes = AStack_35.actionsToTakeVsTypes;
                            value_08.timeStamp.currentCryptoKey =
                                 AStack_35.timeStamp.currentCryptoKey;
                            value_08.timeStamp.hiddenValue = AStack_35.timeStamp.hiddenValue;
                            value_08.timeStamp.hiddenValueOld = AStack_35.timeStamp.hiddenValueOld;
                            value_08.timeStamp.fakeValue = AStack_35.timeStamp.fakeValue;
                            value_08.timeStamp.inited = AStack_35.timeStamp.inited;
                            value_08.timeStamp._17_3_ = AStack_35.timeStamp._17_3_;
                            value_08.persistant = AStack_35.persistant;
                            value_08._53_3_ = AStack_35._53_3_;
                            value_08.lastTimeStamp = AStack_35.lastTimeStamp;
                            value_08.avatarModifierPackageType =
                                 AStack_35.avatarModifierPackageType;
                            value_08.avatarModifierPackageAdditionPolicy =
                                 AStack_35.avatarModifierPackageAdditionPolicy;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,AvatarModifierPackage]::
                            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                      (this,5,value_08,
                                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                      );
                            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                     func_?();
                            pFVar2 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
                            MStack_36._pinnable = (IPinnable *)0x0;
                            MStack_36._pointer = (Void *)0x0;
                            MStack_36._handle.handle = (void *)0x0;
                            mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                      (&MStack_36,(Void *)0x2,(GCHandle)0xc,(IPinnable *)pFVar2,
                                       (MethodInfo *)0x0);
                            if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                              if (pAVar1->max_length == 0) goto code_?;
                              pAVar1->vector[0].avatarModifierType = (int32_t)MStack_36._pointer;
                              pAVar1->vector[0].avatarModifierEffect =
                                   (int32_t)MStack_36._handle.handle;
                              pAVar1->vector[0].value = (Func_1_Single_ *)MStack_36._pinnable;
                              func_?(&pAVar1->vector[0].value,0);
                              func_?(&AStack_37,0,0x44);
                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                        (&AStack_37,AvatarModifierPackageType__Enum_NoFriction,
                                         AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar1,
                                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                         0x0,0,(MethodInfo *)0x0);
                              value_09.duration.currentCryptoKey =
                                   AStack_37.duration.currentCryptoKey;
                              value_09.id = AStack_37.id;
                              value_09.duration.hiddenValue = AStack_37.duration.hiddenValue;
                              value_09.duration.hiddenValueOld = AStack_37.duration.hiddenValueOld;
                              value_09.duration.fakeValue = AStack_37.duration.fakeValue;
                              value_09.duration.inited = AStack_37.duration.inited;
                              value_09.duration._17_3_ = AStack_37.duration._17_3_;
                              value_09.avatarModifiers = AStack_37.avatarModifiers;
                              value_09.actionsToTakeVsTypes = AStack_37.actionsToTakeVsTypes;
                              value_09.timeStamp.currentCryptoKey =
                                   AStack_37.timeStamp.currentCryptoKey;
                              value_09.timeStamp.hiddenValue = AStack_37.timeStamp.hiddenValue;
                              value_09.timeStamp.hiddenValueOld =
                                   AStack_37.timeStamp.hiddenValueOld;
                              value_09.timeStamp.fakeValue = AStack_37.timeStamp.fakeValue;
                              value_09.timeStamp.inited = AStack_37.timeStamp.inited;
                              value_09.timeStamp._17_3_ = AStack_37.timeStamp._17_3_;
                              value_09.persistant = AStack_37.persistant;
                              value_09._53_3_ = AStack_37._53_3_;
                              value_09.lastTimeStamp = AStack_37.lastTimeStamp;
                              value_09.avatarModifierPackageType =
                                   AStack_37.avatarModifierPackageType;
                              value_09.avatarModifierPackageAdditionPolicy =
                                   AStack_37.avatarModifierPackageAdditionPolicy;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,AvatarModifierPackage]::
                              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                        (this,7,value_09,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                        );
                              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                       func_?();
                              pFVar2 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
                              MStack_38._pinnable = (IPinnable *)0x0;
                              MStack_38._pointer = (Void *)0x0;
                              MStack_38._handle.handle = (void *)0x0;
                              mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                        (&MStack_38,(Void *)0x1,(GCHandle)0x12,(IPinnable *)pFVar2,
                                         (MethodInfo *)0x0);
                              if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                if (pAVar1->max_length == 0) goto code_?;
                                pAVar1->vector[0].avatarModifierType = (int32_t)MStack_38._pointer;
                                pAVar1->vector[0].avatarModifierEffect =
                                     (int32_t)MStack_38._handle.handle;
                                pAVar1->vector[0].value = (Func_1_Single_ *)MStack_38._pinnable;
                                func_?(&pAVar1->vector[0].value,0);
                                func_?(&AStack_39,0,0x44);
                                AvatarModifierPackage::AvatarModifierPackage__ctor
                                          (&AStack_39,AvatarModifierPackageType__Enum_FlamerBurn,
                                           AvatarModifierPackageAdditionPolicy__Enum_Renew,0.5,
                                           pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                value_10.duration.currentCryptoKey =
                                     AStack_39.duration.currentCryptoKey;
                                value_10.id = AStack_39.id;
                                value_10.duration.hiddenValue = AStack_39.duration.hiddenValue;
                                value_10.duration.hiddenValueOld =
                                     AStack_39.duration.hiddenValueOld;
                                value_10.duration.fakeValue = AStack_39.duration.fakeValue;
                                value_10.duration.inited = AStack_39.duration.inited;
                                value_10.duration._17_3_ = AStack_39.duration._17_3_;
                                value_10.avatarModifiers = AStack_39.avatarModifiers;
                                value_10.actionsToTakeVsTypes = AStack_39.actionsToTakeVsTypes;
                                value_10.timeStamp.currentCryptoKey =
                                     AStack_39.timeStamp.currentCryptoKey;
                                value_10.timeStamp.hiddenValue = AStack_39.timeStamp.hiddenValue;
                                value_10.timeStamp.hiddenValueOld =
                                     AStack_39.timeStamp.hiddenValueOld;
                                value_10.timeStamp.fakeValue = AStack_39.timeStamp.fakeValue;
                                value_10.timeStamp.inited = AStack_39.timeStamp.inited;
                                value_10.timeStamp._17_3_ = AStack_39.timeStamp._17_3_;
                                value_10.persistant = AStack_39.persistant;
                                value_10._53_3_ = AStack_39._53_3_;
                                value_10.lastTimeStamp = AStack_39.lastTimeStamp;
                                value_10.avatarModifierPackageType =
                                     AStack_39.avatarModifierPackageType;
                                value_10.avatarModifierPackageAdditionPolicy =
                                     AStack_39.avatarModifierPackageAdditionPolicy;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,AvatarModifierPackage]::
                                Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                          (this,8,value_10,
                                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                          );
                                pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                         func_?();
                                pFVar2 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
                                MStack_40._pinnable = (IPinnable *)0x0;
                                MStack_40._pointer = (Void *)0x0;
                                MStack_40._handle.handle = (void *)0x0;
                                mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                          (&MStack_40,(Void *)0x0,(GCHandle)0x0,(IPinnable *)pFVar2
                                           ,(MethodInfo *)0x0);
                                if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                  if (pAVar1->max_length == 0) goto code_?;
                                  pAVar1->vector[0].avatarModifierType =
                                       (int32_t)MStack_40._pointer;
                                  pAVar1->vector[0].avatarModifierEffect =
                                       (int32_t)MStack_40._handle.handle;
                                  pAVar1->vector[0].value = (Func_1_Single_ *)MStack_40._pinnable;
                                  func_?(&pAVar1->vector[0].value,0);
                                  pFVar2 = AvatarModifierPackageFactory_Const
                                                     (0.95,(MethodInfo *)0x0);
                                  MStack_41._pinnable = (IPinnable *)0x0;
                                  MStack_41._pointer = (Void *)0x0;
                                  MStack_41._handle.handle = (void *)0x0;
                                  mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                            (&MStack_41,(Void *)0x0,(GCHandle)0x4,
                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                  if (pAVar1->max_length < 2) goto code_?;
                                  pAVar1->vector[1].avatarModifierType =
                                       (int32_t)MStack_41._pointer;
                                  pAVar1->vector[1].avatarModifierEffect =
                                       (int32_t)MStack_41._handle.handle;
                                  pAVar1->vector[1].value = (Func_1_Single_ *)MStack_41._pinnable;
                                  func_?(&pAVar1->vector[1].value,0);
                                  func_?(&AStack_42,0,0x44);
                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                            (&AStack_42,AvatarModifierPackageType__Enum_Underwater,
                                             AvatarModifierPackageAdditionPolicy__Enum_Renew,10.0,
                                             pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                  value_11.duration.currentCryptoKey =
                                       AStack_42.duration.currentCryptoKey;
                                  value_11.id = AStack_42.id;
                                  value_11.duration.hiddenValue = AStack_42.duration.hiddenValue;
                                  value_11.duration.hiddenValueOld =
                                       AStack_42.duration.hiddenValueOld;
                                  value_11.duration.fakeValue = AStack_42.duration.fakeValue;
                                  value_11.duration.inited = AStack_42.duration.inited;
                                  value_11.duration._17_3_ = AStack_42.duration._17_3_;
                                  value_11.avatarModifiers = AStack_42.avatarModifiers;
                                  value_11.actionsToTakeVsTypes = AStack_42.actionsToTakeVsTypes;
                                  value_11.timeStamp.currentCryptoKey =
                                       AStack_42.timeStamp.currentCryptoKey;
                                  value_11.timeStamp.hiddenValue = AStack_42.timeStamp.hiddenValue;
                                  value_11.timeStamp.hiddenValueOld =
                                       AStack_42.timeStamp.hiddenValueOld;
                                  value_11.timeStamp.fakeValue = AStack_42.timeStamp.fakeValue;
                                  value_11.timeStamp.inited = AStack_42.timeStamp.inited;
                                  value_11.timeStamp._17_3_ = AStack_42.timeStamp._17_3_;
                                  value_11.persistant = AStack_42.persistant;
                                  value_11._53_3_ = AStack_42._53_3_;
                                  value_11.lastTimeStamp = AStack_42.lastTimeStamp;
                                  value_11.avatarModifierPackageType =
                                       AStack_42.avatarModifierPackageType;
                                  value_11.avatarModifierPackageAdditionPolicy =
                                       AStack_42.avatarModifierPackageAdditionPolicy;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,AvatarModifierPackage]::
                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                            (this,9,value_11,
                                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                            );
                                  pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                           func_?();
                                  pFVar2 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0)
                                  ;
                                  MStack_43._pinnable = (IPinnable *)0x0;
                                  MStack_43._pointer = (Void *)0x0;
                                  MStack_43._handle.handle = (void *)0x0;
                                  mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                            (&MStack_43,(Void *)0x2,(GCHandle)0xc,
                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                  if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                  {
                                    if (pAVar1->max_length == 0) goto code_?;
                                    pAVar1->vector[0].avatarModifierType =
                                         (int32_t)MStack_43._pointer;
                                    pAVar1->vector[0].avatarModifierEffect =
                                         (int32_t)MStack_43._handle.handle;
                                    pAVar1->vector[0].value = (Func_1_Single_ *)MStack_43._pinnable
                                    ;
                                    func_?(&pAVar1->vector[0].value,0);
                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                       (0.1,(MethodInfo *)0x0);
                                    MStack_44._pinnable = (IPinnable *)0x0;
                                    MStack_44._pointer = (Void *)0x0;
                                    MStack_44._handle.handle = (void *)0x0;
                                    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                              (&MStack_44,(Void *)0x0,(GCHandle)0x2,
                                               (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                    if (pAVar1->max_length < 2) goto code_?;
                                    pAVar1->vector[1].avatarModifierType =
                                         (int32_t)MStack_44._pointer;
                                    pAVar1->vector[1].avatarModifierEffect =
                                         (int32_t)MStack_44._handle.handle;
                                    pAVar1->vector[1].value = (Func_1_Single_ *)MStack_44._pinnable
                                    ;
                                    func_?(&pAVar1->vector[1].value,0);
                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                       (0.4,(MethodInfo *)0x0);
                                    MStack_45._pinnable = (IPinnable *)0x0;
                                    MStack_45._pointer = (Void *)0x0;
                                    MStack_45._handle.handle = (void *)0x0;
                                    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                              (&MStack_45,(Void *)0x0,(GCHandle)0x3,
                                               (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                    if (pAVar1->max_length < 3) goto code_?;
                                    pAVar1->vector[2].avatarModifierType =
                                         (int32_t)MStack_45._pointer;
                                    pAVar1->vector[2].avatarModifierEffect =
                                         (int32_t)MStack_45._handle.handle;
                                    pAVar1->vector[2].value = (Func_1_Single_ *)MStack_45._pinnable
                                    ;
                                    func_?(&pAVar1->vector[2].value,0);
                                    func_?(&AStack_46,0,0x44);
                                    AvatarModifierPackage::AvatarModifierPackage__ctor
                                              (&AStack_46,AvatarModifierPackageType__Enum_Frozen,
                                               AvatarModifierPackageAdditionPolicy__Enum_Renew,4.2,
                                               pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                    value_12.duration.currentCryptoKey =
                                         AStack_46.duration.currentCryptoKey;
                                    value_12.id = AStack_46.id;
                                    value_12.duration.hiddenValue = AStack_46.duration.hiddenValue;
                                    value_12.duration.hiddenValueOld =
                                         AStack_46.duration.hiddenValueOld;
                                    value_12.duration.fakeValue = AStack_46.duration.fakeValue;
                                    value_12.duration.inited = AStack_46.duration.inited;
                                    value_12.duration._17_3_ = AStack_46.duration._17_3_;
                                    value_12.avatarModifiers = AStack_46.avatarModifiers;
                                    value_12.actionsToTakeVsTypes = AStack_46.actionsToTakeVsTypes;
                                    value_12.timeStamp.currentCryptoKey =
                                         AStack_46.timeStamp.currentCryptoKey;
                                    value_12.timeStamp.hiddenValue =
                                         AStack_46.timeStamp.hiddenValue;
                                    value_12.timeStamp.hiddenValueOld =
                                         AStack_46.timeStamp.hiddenValueOld;
                                    value_12.timeStamp.fakeValue = AStack_46.timeStamp.fakeValue;
                                    value_12.timeStamp.inited = AStack_46.timeStamp.inited;
                                    value_12.timeStamp._17_3_ = AStack_46.timeStamp._17_3_;
                                    value_12.persistant = AStack_46.persistant;
                                    value_12._53_3_ = AStack_46._53_3_;
                                    value_12.lastTimeStamp = AStack_46.lastTimeStamp;
                                    value_12.avatarModifierPackageType =
                                         AStack_46.avatarModifierPackageType;
                                    value_12.avatarModifierPackageAdditionPolicy =
                                         AStack_46.avatarModifierPackageAdditionPolicy;
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,AvatarModifierPackage]::
                                    Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                              (this,10,value_12,
                                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                              );
                                    pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                             func_?();
                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                       (3.0,(MethodInfo *)0x0);
                                    MStack_47._pinnable = (IPinnable *)0x0;
                                    MStack_47._pointer = (Void *)0x0;
                                    MStack_47._handle.handle = (void *)0x0;
                                    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                                              (&MStack_47,(Void *)0x0,(GCHandle)0x3,
                                               (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                    if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)0x0
                                       ) {
                                      if (pAVar1->max_length == 0) goto code_?;
                                      pAVar1->vector[0].avatarModifierType =
                                           (int32_t)MStack_47._pointer;
                                      pAVar1->vector[0].avatarModifierEffect =
                                           (int32_t)MStack_47._handle.handle;
                                      pAVar1->vector[0].value =
                                           (Func_1_Single_ *)MStack_47._pinnable;
                                      func_?(&pAVar1->vector[0].value,0);
                                      pFVar2 = AvatarModifierPackageFactory_Const
                                                         (20.0,(MethodInfo *)0x0);
                                      MStack_48._pinnable = (IPinnable *)0x0;
                                      MStack_48._pointer = (Void *)0x0;
                                      MStack_48._handle.handle = (void *)0x0;
                                      mscorlib.dll::System::Buffers::MemoryHandle::
                                      MemoryHandle__ctor(&MStack_48,(Void *)0x0,(GCHandle)0x13,
                                                         (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                      if (pAVar1->max_length < 2) goto code_?;
                                      pAVar1->vector[1].avatarModifierType =
                                           (int32_t)MStack_48._pointer;
                                      pAVar1->vector[1].avatarModifierEffect =
                                           (int32_t)MStack_48._handle.handle;
                                      pAVar1->vector[1].value =
                                           (Func_1_Single_ *)MStack_48._pinnable;
                                      func_?(&pAVar1->vector[1].value,0);
                                      func_?(&AStack_49,0,0x44);
                                      AvatarModifierPackage::AvatarModifierPackage__ctor
                                                (&AStack_49,
                                                 AvatarModifierPackageType__Enum_NinjaRun,
                                                 AvatarModifierPackageAdditionPolicy__Enum_Renew,7.0
                                                 ,pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                      value_13.duration.currentCryptoKey =
                                           AStack_49.duration.currentCryptoKey;
                                      value_13.id = AStack_49.id;
                                      value_13.duration.hiddenValue =
                                           AStack_49.duration.hiddenValue;
                                      value_13.duration.hiddenValueOld =
                                           AStack_49.duration.hiddenValueOld;
                                      value_13.duration.fakeValue = AStack_49.duration.fakeValue;
                                      value_13.duration.inited = AStack_49.duration.inited;
                                      value_13.duration._17_3_ = AStack_49.duration._17_3_;
                                      value_13.avatarModifiers = AStack_49.avatarModifiers;
                                      value_13.actionsToTakeVsTypes =
                                           AStack_49.actionsToTakeVsTypes;
                                      value_13.timeStamp.currentCryptoKey =
                                           AStack_49.timeStamp.currentCryptoKey;
                                      value_13.timeStamp.hiddenValue =
                                           AStack_49.timeStamp.hiddenValue;
                                      value_13.timeStamp.hiddenValueOld =
                                           AStack_49.timeStamp.hiddenValueOld;
                                      value_13.timeStamp.fakeValue = AStack_49.timeStamp.fakeValue;
                                      value_13.timeStamp.inited = AStack_49.timeStamp.inited;
                                      value_13.timeStamp._17_3_ = AStack_49.timeStamp._17_3_;
                                      value_13.persistant = AStack_49.persistant;
                                      value_13._53_3_ = AStack_49._53_3_;
                                      value_13.lastTimeStamp = AStack_49.lastTimeStamp;
                                      value_13.avatarModifierPackageType =
                                           AStack_49.avatarModifierPackageType;
                                      value_13.avatarModifierPackageAdditionPolicy =
                                           AStack_49.avatarModifierPackageAdditionPolicy;
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                      Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                (this,0xb,value_13,
                                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                );
                                      pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                               func_?();
                                      pFVar2 = AvatarModifierPackageFactory_Const
                                                         (0.3,(MethodInfo *)0x0);
                                      MStack_50._pinnable = (IPinnable *)0x0;
                                      MStack_50._pointer = (Void *)0x0;
                                      MStack_50._handle.handle = (void *)0x0;
                                      mscorlib.dll::System::Buffers::MemoryHandle::
                                      MemoryHandle__ctor(&MStack_50,(Void *)0x0,(GCHandle)0x3,
                                                         (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                      if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *)
                                                    0x0) {
                                        if (pAVar1->max_length == 0) goto code_?;
                                        pAVar1->vector[0].avatarModifierType =
                                             (int32_t)MStack_50._pointer;
                                        pAVar1->vector[0].avatarModifierEffect =
                                             (int32_t)MStack_50._handle.handle;
                                        pAVar1->vector[0].value =
                                             (Func_1_Single_ *)MStack_50._pinnable;
                                        func_?(&pAVar1->vector[0].value,0);
                                        func_?(&AStack_51,0,0x44);
                                        AvatarModifierPackage::AvatarModifierPackage__ctor
                                                  (&AStack_51,
                                                                                                      
                                                  AvatarModifierPackageType__Enum_TimeAttackFlagDebriefSlow
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  7.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                        value_14.duration.currentCryptoKey =
                                             AStack_51.duration.currentCryptoKey;
                                        value_14.id = AStack_51.id;
                                        value_14.duration.hiddenValue =
                                             AStack_51.duration.hiddenValue;
                                        value_14.duration.hiddenValueOld =
                                             AStack_51.duration.hiddenValueOld;
                                        value_14.duration.fakeValue = AStack_51.duration.fakeValue;
                                        value_14.duration.inited = AStack_51.duration.inited;
                                        value_14.duration._17_3_ = AStack_51.duration._17_3_;
                                        value_14.avatarModifiers = AStack_51.avatarModifiers;
                                        value_14.actionsToTakeVsTypes =
                                             AStack_51.actionsToTakeVsTypes;
                                        value_14.timeStamp.currentCryptoKey =
                                             AStack_51.timeStamp.currentCryptoKey;
                                        value_14.timeStamp.hiddenValue =
                                             AStack_51.timeStamp.hiddenValue;
                                        value_14.timeStamp.hiddenValueOld =
                                             AStack_51.timeStamp.hiddenValueOld;
                                        value_14.timeStamp.fakeValue =
                                             AStack_51.timeStamp.fakeValue;
                                        value_14.timeStamp.inited = AStack_51.timeStamp.inited;
                                        value_14.timeStamp._17_3_ = AStack_51.timeStamp._17_3_;
                                        value_14.persistant = AStack_51.persistant;
                                        value_14._53_3_ = AStack_51._53_3_;
                                        value_14.lastTimeStamp = AStack_51.lastTimeStamp;
                                        value_14.avatarModifierPackageType =
                                             AStack_51.avatarModifierPackageType;
                                        value_14.avatarModifierPackageAdditionPolicy =
                                             AStack_51.avatarModifierPackageAdditionPolicy;
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                        Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                  (this,0x13,value_14,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                        pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                                 func_?();
                                        pFVar2 = AvatarModifierPackageFactory_Const
                                                           (0.4,(MethodInfo *)0x0);
                                        MStack_52._pinnable = (IPinnable *)0x0;
                                        MStack_52._pointer = (Void *)0x0;
                                        MStack_52._handle.handle = (void *)0x0;
                                        mscorlib.dll::System::Buffers::MemoryHandle::
                                        MemoryHandle__ctor(&MStack_52,(Void *)0x0,(GCHandle)0x3,
                                                           (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                        if (pAVar1 != (AvatarModifierPackage_AvatarModifier__Array *
                                                      )0x0) {
                                          if (pAVar1->max_length == 0) goto code_?;
                                          pAVar1->vector[0].avatarModifierType =
                                               (int32_t)MStack_52._pointer;
                                          pAVar1->vector[0].avatarModifierEffect =
                                               (int32_t)MStack_52._handle.handle;
                                          pAVar1->vector[0].value =
                                               (Func_1_Single_ *)MStack_52._pinnable;
                                          func_?(&pAVar1->vector[0].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (0.25,(MethodInfo *)0x0);
                                          MStack_53._pinnable = (IPinnable *)0x0;
                                          MStack_53._pointer = (Void *)0x0;
                                          MStack_53._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_53,(Void *)0x2,(GCHandle)0x5,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 2) goto code_?;
                                          pAVar1->vector[1].avatarModifierType =
                                               (int32_t)MStack_53._pointer;
                                          pAVar1->vector[1].avatarModifierEffect =
                                               (int32_t)MStack_53._handle.handle;
                                          pAVar1->vector[1].value =
                                               (Func_1_Single_ *)MStack_53._pinnable;
                                          func_?(&pAVar1->vector[1].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (0.6,(MethodInfo *)0x0);
                                          MStack_54._pinnable = (IPinnable *)0x0;
                                          MStack_54._pointer = (Void *)0x0;
                                          MStack_54._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_54,(Void *)0x0,(GCHandle)0x2,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 3) goto code_?;
                                          pAVar1->vector[2].avatarModifierType =
                                               (int32_t)MStack_54._pointer;
                                          pAVar1->vector[2].avatarModifierEffect =
                                               (int32_t)MStack_54._handle.handle;
                                          pAVar1->vector[2].value =
                                               (Func_1_Single_ *)MStack_54._pinnable;
                                          func_?(&pAVar1->vector[2].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (4.0,(MethodInfo *)0x0);
                                          MStack_55._pinnable = (IPinnable *)0x0;
                                          MStack_55._pointer = (Void *)0x0;
                                          MStack_55._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_55,(Void *)0x0,(GCHandle)0x6,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 4) goto code_?;
                                          pAVar1->vector[3].avatarModifierType =
                                               (int32_t)MStack_55._pointer;
                                          pAVar1->vector[3].avatarModifierEffect =
                                               (int32_t)MStack_55._handle.handle;
                                          pAVar1->vector[3].value =
                                               (Func_1_Single_ *)MStack_55._pinnable;
                                          func_?(&pAVar1->vector[3].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (1.0,(MethodInfo *)0x0);
                                          MStack_56._pinnable = (IPinnable *)0x0;
                                          MStack_56._pointer = (Void *)0x0;
                                          MStack_56._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_56,(Void *)0x2,(GCHandle)0x8,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 5) goto code_?;
                                          pAVar1->vector[4].avatarModifierType =
                                               (int32_t)MStack_56._pointer;
                                          pAVar1->vector[4].avatarModifierEffect =
                                               (int32_t)MStack_56._handle.handle;
                                          pAVar1->vector[4].value =
                                               (Func_1_Single_ *)MStack_56._pinnable;
                                          func_?(&pAVar1->vector[4].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (1.0,(MethodInfo *)0x0);
                                          MStack_57._pinnable = (IPinnable *)0x0;
                                          MStack_57._pointer = (Void *)0x0;
                                          MStack_57._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_57,(Void *)0x2,(GCHandle)0x9,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 6) goto code_?;
                                          pAVar1->vector[5].avatarModifierType =
                                               (int32_t)MStack_57._pointer;
                                          pAVar1->vector[5].avatarModifierEffect =
                                               (int32_t)MStack_57._handle.handle;
                                          pAVar1->vector[5].value =
                                               (Func_1_Single_ *)MStack_57._pinnable;
                                          func_?(&pAVar1->vector[5].value,0);
                                          pFVar2 = AvatarModifierPackageFactory_Const
                                                             (0.25,(MethodInfo *)0x0);
                                          MStack_58._pinnable = (IPinnable *)0x0;
                                          MStack_58._pointer = (Void *)0x0;
                                          MStack_58._handle.handle = (void *)0x0;
                                          mscorlib.dll::System::Buffers::MemoryHandle::
                                          MemoryHandle__ctor(&MStack_58,(Void *)0x2,(GCHandle)0x1,
                                                             (IPinnable *)pFVar2,(MethodInfo *)0x0);
                                          if (pAVar1->max_length < 7) goto code_?;
                                          pAVar1->vector[6].avatarModifierType =
                                               (int32_t)MStack_58._pointer;
                                          pAVar1->vector[6].avatarModifierEffect =
                                               (int32_t)MStack_58._handle.handle;
                                          pAVar1->vector[6].value =
                                               (Func_1_Single_ *)MStack_58._pinnable;
                                          func_?(&pAVar1->vector[6].value,0);
                                          pDVar28 = (Dictionary_2_System_Object_System_Object_ *)
                                                   func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                          if (pDVar28 != (Dictionary_2_System_Object_System_Object_ *
                                                        )0x0) {
                                            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering
                                            ::PostProcessing::ParameterOverride`1[System::Object]::
                                            ParameterOverride_1_System_Object___ctor
                                                      ((ParameterOverride_1_System_Object_ *)pDVar28,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Object,System::Object]::
                                            Dictionary_2_System_Object_System_Object__Add
                                                      (pDVar28,(Object *)0xc,(Object *)0x1,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Object,System::Object]::
                                            Dictionary_2_System_Object_System_Object__Add
                                                      (pDVar28,(Object *)0xf,(Object *)0x3,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                            func_?(&AStack_59,0,0x44);
                                            AvatarModifierPackage::AvatarModifierPackage__ctor
                                                      (&AStack_59,
                                                       AvatarModifierPackageType__Enum_Shrunken,
                                                                                                              
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  35.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar28,0,(MethodInfo *)0x0);
                                            value_21.duration.currentCryptoKey =
                                                 AStack_59.duration.currentCryptoKey;
                                            value_21.id = AStack_59.id;
                                            value_21.duration.hiddenValue =
                                                 AStack_59.duration.hiddenValue;
                                            value_21.duration.hiddenValueOld =
                                                 AStack_59.duration.hiddenValueOld;
                                            value_21.duration.fakeValue =
                                                 AStack_59.duration.fakeValue;
                                            value_21.duration.inited = AStack_59.duration.inited;
                                            value_21.duration._17_3_ = AStack_59.duration._17_3_;
                                            value_21.avatarModifiers = AStack_59.avatarModifiers;
                                            value_21.actionsToTakeVsTypes =
                                                 AStack_59.actionsToTakeVsTypes;
                                            value_21.timeStamp.currentCryptoKey =
                                                 AStack_59.timeStamp.currentCryptoKey;
                                            value_21.timeStamp.hiddenValue =
                                                 AStack_59.timeStamp.hiddenValue;
                                            value_21.timeStamp.hiddenValueOld =
                                                 AStack_59.timeStamp.hiddenValueOld;
                                            value_21.timeStamp.fakeValue =
                                                 AStack_59.timeStamp.fakeValue;
                                            value_21.timeStamp.inited = AStack_59.timeStamp.inited;
                                            value_21.timeStamp._17_3_ = AStack_59.timeStamp._17_3_;
                                            value_21.persistant = AStack_59.persistant;
                                            value_21._53_3_ = AStack_59._53_3_;
                                            value_21.lastTimeStamp = AStack_59.lastTimeStamp;
                                            value_21.avatarModifierPackageType =
                                                 AStack_59.avatarModifierPackageType;
                                            value_21.avatarModifierPackageAdditionPolicy =
                                                 AStack_59.avatarModifierPackageAdditionPolicy;
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,AvatarModifierPackage]::
                                            Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                      (this,0xc,value_21,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                            pAVar1 = (AvatarModifierPackage_AvatarModifier__Array *)
                                                     func_?();
                                            pFVar2 = AvatarModifierPackageFactory_Const
                                                               (0.96,(MethodInfo *)0x0);
                                            MStack_60._pinnable = (IPinnable *)0x0;
                                            MStack_60._pointer = (Void *)0x0;
                                            MStack_60._handle.handle = (void *)0x0;
                                            mscorlib.dll::System::Buffers::MemoryHandle::
                                            MemoryHandle__ctor(&MStack_60,(Void *)0x2,(GCHandle)0x4
                                                               ,(IPinnable *)pFVar2,
                                                               (MethodInfo *)0x0);
                                            if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                            {
                                              if (pAVar1->max_length == 0) goto code_?;
                                              pAVar1->vector[0].avatarModifierType =
                                                   (int32_t)MStack_60._pointer;
                                              pAVar1->vector[0].avatarModifierEffect =
                                                   (int32_t)MStack_60._handle.handle;
                                              pAVar1->vector[0].value =
                                                   (Func_1_Single_ *)MStack_60._pinnable;
                                              func_?(&pAVar1->vector[0].value,0);
                                              func_?(&AStack_61,0,0x44);
                                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                                        (&AStack_61,
                                                                                                                  
                                                  AvatarModifierPackageType__Enum_WindFriction,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                              value_15.duration.currentCryptoKey =
                                                   AStack_61.duration.currentCryptoKey;
                                              value_15.id = AStack_61.id;
                                              value_15.duration.hiddenValue =
                                                   AStack_61.duration.hiddenValue;
                                              value_15.duration.hiddenValueOld =
                                                   AStack_61.duration.hiddenValueOld;
                                              value_15.duration.fakeValue =
                                                   AStack_61.duration.fakeValue;
                                              value_15.duration.inited = AStack_61.duration.inited;
                                              value_15.duration._17_3_ = AStack_61.duration._17_3_;
                                              value_15.avatarModifiers = AStack_61.avatarModifiers;
                                              value_15.actionsToTakeVsTypes =
                                                   AStack_61.actionsToTakeVsTypes;
                                              value_15.timeStamp.currentCryptoKey =
                                                   AStack_61.timeStamp.currentCryptoKey;
                                              value_15.timeStamp.hiddenValue =
                                                   AStack_61.timeStamp.hiddenValue;
                                              value_15.timeStamp.hiddenValueOld =
                                                   AStack_61.timeStamp.hiddenValueOld;
                                              value_15.timeStamp.fakeValue =
                                                   AStack_61.timeStamp.fakeValue;
                                              value_15.timeStamp.inited =
                                                   AStack_61.timeStamp.inited;
                                              value_15.timeStamp._17_3_ =
                                                   AStack_61.timeStamp._17_3_;
                                              value_15.persistant = AStack_61.persistant;
                                              value_15._53_3_ = AStack_61._53_3_;
                                              value_15.lastTimeStamp = AStack_61.lastTimeStamp;
                                              value_15.avatarModifierPackageType =
                                                   AStack_61.avatarModifierPackageType;
                                              value_15.avatarModifierPackageAdditionPolicy =
                                                   AStack_61.avatarModifierPackageAdditionPolicy;
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,AvatarModifierPackage]
                                              ::
                                              Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                        (this,0xd,value_15,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                              pAVar1 = (AvatarModifierPackage_AvatarModifier__Array
                                                        *)func_?();
                                              pFVar2 = AvatarModifierPackageFactory_Const
                                                                 (0.5,(MethodInfo *)0x0);
                                              MStack_62._pinnable = (IPinnable *)0x0;
                                              MStack_62._pointer = (Void *)0x0;
                                              MStack_62._handle.handle = (void *)0x0;
                                              mscorlib.dll::System::Buffers::MemoryHandle::
                                              MemoryHandle__ctor(&MStack_62,(Void *)0x2,
                                                                 (GCHandle)0x6,(IPinnable *)pFVar2,
                                                                 (MethodInfo *)0x0);
                                              if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                              {
                                                if (pAVar1->max_length == 0) goto code_?;
                                                pAVar1->vector[0].avatarModifierType =
                                                     (int32_t)MStack_62._pointer;
                                                pAVar1->vector[0].avatarModifierEffect =
                                                     (int32_t)MStack_62._handle.handle;
                                                pAVar1->vector[0].value =
                                                     (Func_1_Single_ *)MStack_62._pinnable;
                                                func_?(&pAVar1->vector[0].value,0);
                                                func_?(&AStack_63,0,0x44);
                                                AvatarModifierPackage::AvatarModifierPackage__ctor
                                                          (&AStack_63,
                                                           AvatarModifierPackageType__Enum_Shielded,
                                                                                                                      
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,1,(MethodInfo *)0x0);
                                                value_16.duration.currentCryptoKey =
                                                     AStack_63.duration.currentCryptoKey;
                                                value_16.id = AStack_63.id;
                                                value_16.duration.hiddenValue =
                                                     AStack_63.duration.hiddenValue;
                                                value_16.duration.hiddenValueOld =
                                                     AStack_63.duration.hiddenValueOld;
                                                value_16.duration.fakeValue =
                                                     AStack_63.duration.fakeValue;
                                                value_16.duration.inited =
                                                     AStack_63.duration.inited;
                                                value_16.duration._17_3_ =
                                                     AStack_63.duration._17_3_;
                                                value_16.avatarModifiers =
                                                     AStack_63.avatarModifiers;
                                                value_16.actionsToTakeVsTypes =
                                                     AStack_63.actionsToTakeVsTypes;
                                                value_16.timeStamp.currentCryptoKey =
                                                     AStack_63.timeStamp.currentCryptoKey;
                                                value_16.timeStamp.hiddenValue =
                                                     AStack_63.timeStamp.hiddenValue;
                                                value_16.timeStamp.hiddenValueOld =
                                                     AStack_63.timeStamp.hiddenValueOld;
                                                value_16.timeStamp.fakeValue =
                                                     AStack_63.timeStamp.fakeValue;
                                                value_16.timeStamp.inited =
                                                     AStack_63.timeStamp.inited;
                                                value_16.timeStamp._17_3_ =
                                                     AStack_63.timeStamp._17_3_;
                                                value_16.persistant = AStack_63.persistant;
                                                value_16._53_3_ = AStack_63._53_3_;
                                                value_16.lastTimeStamp = AStack_63.lastTimeStamp;
                                                value_16.avatarModifierPackageType =
                                                     AStack_63.avatarModifierPackageType;
                                                value_16.avatarModifierPackageAdditionPolicy =
                                                     AStack_63.avatarModifierPackageAdditionPolicy;
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
                                                pFVar2 = AvatarModifierPackageFactory_Const
                                                                   (1.0,(MethodInfo *)0x0);
                                                MStack_64._pinnable = (IPinnable *)0x0;
                                                MStack_64._pointer = (Void *)0x0;
                                                MStack_64._handle.handle = (void *)0x0;
                                                mscorlib.dll::System::Buffers::MemoryHandle::
                                                MemoryHandle__ctor(&MStack_64,(Void *)0x2,
                                                                   (GCHandle)0x7,(IPinnable *)pFVar2
                                                                   ,(MethodInfo *)0x0);
                                                if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                {
                                                  if (pAVar1->max_length == 0)
                                                  goto code_?;
                                                  pAVar1->vector[0].avatarModifierType =
                                                       (int32_t)MStack_64._pointer;
                                                  pAVar1->vector[0].avatarModifierEffect =
                                                       (int32_t)MStack_64._handle.handle;
                                                  pAVar1->vector[0].value =
                                                       (Func_1_Single_ *)MStack_64._pinnable;
                                                  func_?(&pAVar1->vector[0].value,0);
                                                  func_?(&AStack_65,0,0x44);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_65,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_DisableVehiclePickup
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  INFINITY,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  value_17.duration.currentCryptoKey =
                                                       AStack_65.duration.currentCryptoKey;
                                                  value_17.id = AStack_65.id;
                                                  value_17.duration.hiddenValue =
                                                       AStack_65.duration.hiddenValue;
                                                  value_17.duration.hiddenValueOld =
                                                       AStack_65.duration.hiddenValueOld;
                                                  value_17.duration.fakeValue =
                                                       AStack_65.duration.fakeValue;
                                                  value_17.duration.inited =
                                                       AStack_65.duration.inited;
                                                  value_17.duration._17_3_ =
                                                       AStack_65.duration._17_3_;
                                                  value_17.avatarModifiers =
                                                       AStack_65.avatarModifiers;
                                                  value_17.actionsToTakeVsTypes =
                                                       AStack_65.actionsToTakeVsTypes;
                                                  value_17.timeStamp.currentCryptoKey =
                                                       AStack_65.timeStamp.currentCryptoKey;
                                                  value_17.timeStamp.hiddenValue =
                                                       AStack_65.timeStamp.hiddenValue;
                                                  value_17.timeStamp.hiddenValueOld =
                                                       AStack_65.timeStamp.hiddenValueOld;
                                                  value_17.timeStamp.fakeValue =
                                                       AStack_65.timeStamp.fakeValue;
                                                  value_17.timeStamp.inited =
                                                       AStack_65.timeStamp.inited;
                                                  value_17.timeStamp._17_3_ =
                                                       AStack_65.timeStamp._17_3_;
                                                  value_17.persistant = AStack_65.persistant;
                                                  value_17._53_3_ = AStack_65._53_3_;
                                                  value_17.lastTimeStamp = AStack_65.lastTimeStamp;
                                                  value_17.avatarModifierPackageType =
                                                       AStack_65.avatarModifierPackageType;
                                                  value_17.avatarModifierPackageAdditionPolicy =
                                                       AStack_65.
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
                                                  pFVar2 = AvatarModifierPackageFactory_Const
                                                                     (1.5,(MethodInfo *)0x0);
                                                  MStack_66._pinnable = (IPinnable *)0x0;
                                                  MStack_66._pointer = (Void *)0x0;
                                                  MStack_66._handle.handle = (void *)0x0;
                                                  mscorlib.dll::System::Buffers::MemoryHandle::
                                                  MemoryHandle__ctor(&MStack_66,(Void *)0x0,
                                                                     (GCHandle)0x3,
                                                                     (IPinnable *)pFVar2,
                                                                     (MethodInfo *)0x0);
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         (int32_t)MStack_66._pointer;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         (int32_t)MStack_66._handle.handle;
                                                    pAVar1->vector[0].value =
                                                         (Func_1_Single_ *)MStack_66._pinnable;
                                                    func_?(&pAVar1->vector[0].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (2.0,(MethodInfo *)0x0);
                                                    MStack_67._pinnable = (IPinnable *)0x0;
                                                    MStack_67._pointer = (Void *)0x0;
                                                    MStack_67._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_67,(Void *)0x2,
                                                                       (GCHandle)0x5,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 2)
                                                    goto code_?;
                                                    pAVar1->vector[1].avatarModifierType =
                                                         (int32_t)MStack_67._pointer;
                                                    pAVar1->vector[1].avatarModifierEffect =
                                                         (int32_t)MStack_67._handle.handle;
                                                    pAVar1->vector[1].value =
                                                         (Func_1_Single_ *)MStack_67._pinnable;
                                                    func_?(&pAVar1->vector[1].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (2.0,(MethodInfo *)0x0);
                                                    MStack_68._pinnable = (IPinnable *)0x0;
                                                    MStack_68._pointer = (Void *)0x0;
                                                    MStack_68._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_68,(Void *)0x0,
                                                                       (GCHandle)0x2,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 3)
                                                    goto code_?;
                                                    pAVar1->vector[2].avatarModifierType =
                                                         (int32_t)MStack_68._pointer;
                                                    pAVar1->vector[2].avatarModifierEffect =
                                                         (int32_t)MStack_68._handle.handle;
                                                    pAVar1->vector[2].value =
                                                         (Func_1_Single_ *)MStack_68._pinnable;
                                                    func_?(&pAVar1->vector[2].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (0.5,(MethodInfo *)0x0);
                                                    MStack_69._pinnable = (IPinnable *)0x0;
                                                    MStack_69._pointer = (Void *)0x0;
                                                    MStack_69._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_69,(Void *)0x0,
                                                                       (GCHandle)0x6,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 4)
                                                    goto code_?;
                                                    pAVar1->vector[3].avatarModifierType =
                                                         (int32_t)MStack_69._pointer;
                                                    pAVar1->vector[3].avatarModifierEffect =
                                                         (int32_t)MStack_69._handle.handle;
                                                    pAVar1->vector[3].value =
                                                         (Func_1_Single_ *)MStack_69._pinnable;
                                                    func_?(&pAVar1->vector[3].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (1.0,(MethodInfo *)0x0);
                                                    MStack_70._pinnable = (IPinnable *)0x0;
                                                    MStack_70._pointer = (Void *)0x0;
                                                    MStack_70._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_70,(Void *)0x2,
                                                                       (GCHandle)0x8,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 5)
                                                    goto code_?;
                                                    pAVar1->vector[4].avatarModifierType =
                                                         (int32_t)MStack_70._pointer;
                                                    pAVar1->vector[4].avatarModifierEffect =
                                                         (int32_t)MStack_70._handle.handle;
                                                    pAVar1->vector[4].value =
                                                         (Func_1_Single_ *)MStack_70._pinnable;
                                                    func_?(&pAVar1->vector[4].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (1.0,(MethodInfo *)0x0);
                                                    MStack_71._pinnable = (IPinnable *)0x0;
                                                    MStack_71._pointer = (Void *)0x0;
                                                    MStack_71._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_71,(Void *)0x2,
                                                                       (GCHandle)0x9,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 6)
                                                    goto code_?;
                                                    pAVar1->vector[5].avatarModifierType =
                                                         (int32_t)MStack_71._pointer;
                                                    pAVar1->vector[5].avatarModifierEffect =
                                                         (int32_t)MStack_71._handle.handle;
                                                    pAVar1->vector[5].value =
                                                         (Func_1_Single_ *)MStack_71._pinnable;
                                                    func_?(&pAVar1->vector[5].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (2.0,(MethodInfo *)0x0);
                                                    MStack_72._pinnable = (IPinnable *)0x0;
                                                    MStack_72._pointer = (Void *)0x0;
                                                    MStack_72._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_72,(Void *)0x2,
                                                                       (GCHandle)0x1,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 7)
                                                    goto code_?;
                                                    pAVar1->vector[6].avatarModifierType =
                                                         (int32_t)MStack_72._pointer;
                                                    pAVar1->vector[6].avatarModifierEffect =
                                                         (int32_t)MStack_72._handle.handle;
                                                    pAVar1->vector[6].value =
                                                         (Func_1_Single_ *)MStack_72._pinnable;
                                                    func_?(&pAVar1->vector[6].value,0);
                                                    pDVar28 = (
                                                  Dictionary_2_System_Object_System_Object_ *)
                                                  func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  if (pDVar28 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    Unity.Postprocessing.Runtime.dll::UnityEngine::
                                                    Rendering::PostProcessing::
                                                    ParameterOverride`1[System::Object]::
                                                    ParameterOverride_1_System_Object___ctor
                                                              ((ParameterOverride_1_System_Object_ *
                                                               )pDVar28,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (pDVar28,(Object *)0xc,(Object *)0x3,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (pDVar28,(Object *)0xf,(Object *)0x1,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(&AStack_73,0,0x44);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_73,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Enlarged,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  35.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar28,0,(MethodInfo *)0x0);
                                                  value_22.duration.currentCryptoKey =
                                                       AStack_73.duration.currentCryptoKey;
                                                  value_22.id = AStack_73.id;
                                                  value_22.duration.hiddenValue =
                                                       AStack_73.duration.hiddenValue;
                                                  value_22.duration.hiddenValueOld =
                                                       AStack_73.duration.hiddenValueOld;
                                                  value_22.duration.fakeValue =
                                                       AStack_73.duration.fakeValue;
                                                  value_22.duration.inited =
                                                       AStack_73.duration.inited;
                                                  value_22.duration._17_3_ =
                                                       AStack_73.duration._17_3_;
                                                  value_22.avatarModifiers =
                                                       AStack_73.avatarModifiers;
                                                  value_22.actionsToTakeVsTypes =
                                                       AStack_73.actionsToTakeVsTypes;
                                                  value_22.timeStamp.currentCryptoKey =
                                                       AStack_73.timeStamp.currentCryptoKey;
                                                  value_22.timeStamp.hiddenValue =
                                                       AStack_73.timeStamp.hiddenValue;
                                                  value_22.timeStamp.hiddenValueOld =
                                                       AStack_73.timeStamp.hiddenValueOld;
                                                  value_22.timeStamp.fakeValue =
                                                       AStack_73.timeStamp.fakeValue;
                                                  value_22.timeStamp.inited =
                                                       AStack_73.timeStamp.inited;
                                                  value_22.timeStamp._17_3_ =
                                                       AStack_73.timeStamp._17_3_;
                                                  value_22.persistant = AStack_73.persistant;
                                                  value_22._53_3_ = AStack_73._53_3_;
                                                  value_22.lastTimeStamp = AStack_73.lastTimeStamp;
                                                  value_22.avatarModifierPackageType =
                                                       AStack_73.avatarModifierPackageType;
                                                  value_22.avatarModifierPackageAdditionPolicy =
                                                       AStack_73.
                                                       avatarModifierPackageAdditionPolicy;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0xf,value_22,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  if (cRam_? == '\0') {
                                                    AStack_74.id =
                                                         (int32_t)&
                                                  TypeInfo__AvatarModifierPackageFactory;
                                                  pAStack_75 = (
                                                  AvatarModifierPackage_AvatarModifier__Array__Class
                                                  *)&UNK_?;
                                                  func_?();
                                                  pAStack_75 = (
                                                  AvatarModifierPackage_AvatarModifier__Array__Class
                                                  *)&TypeInfo__AvatarModifierPackage__AvatarModifier
                                                  ;
                                                  func_?();
                                                  ppMStack_76 = &
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ;
                                                  func_?();
                                                  ppMStack_77 = &
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  ;
                                                  func_?();
                                                  pBStack_78 = (Byte__Array *)
                                                                &
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  ;
                                                  func_?();
                                                  cRam_? = '\x01';
                                                  }
                                                  AStack_74.id = 1;
                                                  pAStack_75 = 
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier;
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  if ((TypeInfo__AvatarModifierPackageFactory->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?(
                                                  TypeInfo__AvatarModifierPackageFactory);
                                                  }
                                                  pFVar2 = AvatarModifierPackageFactory_Const
                                                                     (1.0,(MethodInfo *)0x0);
                                                  MStack_79._pinnable = (IPinnable *)0x0;
                                                  MStack_79._pointer = (Void *)0x0;
                                                  MStack_79._handle.handle = (void *)0x0;
                                                  mscorlib.dll::System::Buffers::MemoryHandle::
                                                  MemoryHandle__ctor(&MStack_79,(Void *)0x2,
                                                                     (GCHandle)0xa,
                                                                     (IPinnable *)pFVar2,
                                                                     (MethodInfo *)0x0);
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         (int32_t)MStack_79._pointer;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         (int32_t)MStack_79._handle.handle;
                                                    pAVar1->vector[0].value =
                                                         (Func_1_Single_ *)MStack_79._pinnable;
                                                    func_?(&pAVar1->vector[0].value,0);
                                                    pDVar28 = (
                                                  Dictionary_2_System_Object_System_Object_ *)
                                                  func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  if (pDVar28 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    Unity.Postprocessing.Runtime.dll::UnityEngine::
                                                    Rendering::PostProcessing::
                                                    ParameterOverride`1[System::Object]::
                                                    ParameterOverride_1_System_Object___ctor
                                                              ((ParameterOverride_1_System_Object_ *
                                                               )pDVar28,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (pDVar28,(Object *)0x11,(Object *)0x1,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(&AStack_74,0,0x44);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_74,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_SpawnProtection,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  4.0,pAVar1,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar28,1,(MethodInfo *)0x0);
                                                  value_20.duration.currentCryptoKey =
                                                       AStack_74.duration.currentCryptoKey;
                                                  value_20.id = AStack_74.id;
                                                  value_20.duration.hiddenValue =
                                                       AStack_74.duration.hiddenValue;
                                                  value_20.duration.hiddenValueOld =
                                                       AStack_74.duration.hiddenValueOld;
                                                  value_20.duration.fakeValue =
                                                       AStack_74.duration.fakeValue;
                                                  value_20.duration.inited =
                                                       AStack_74.duration.inited;
                                                  value_20.duration._17_3_ =
                                                       AStack_74.duration._17_3_;
                                                  value_20.avatarModifiers =
                                                       AStack_74.avatarModifiers;
                                                  value_20.actionsToTakeVsTypes =
                                                       AStack_74.actionsToTakeVsTypes;
                                                  value_20.timeStamp.currentCryptoKey =
                                                       AStack_74.timeStamp.currentCryptoKey;
                                                  value_20.timeStamp.hiddenValue =
                                                       AStack_74.timeStamp.hiddenValue;
                                                  value_20.timeStamp.hiddenValueOld =
                                                       AStack_74.timeStamp.hiddenValueOld;
                                                  value_20.timeStamp.fakeValue =
                                                       AStack_74.timeStamp.fakeValue;
                                                  value_20.timeStamp.inited =
                                                       AStack_74.timeStamp.inited;
                                                  value_20.timeStamp._17_3_ =
                                                       AStack_74.timeStamp._17_3_;
                                                  value_20.persistant = AStack_74.persistant;
                                                  value_20._53_3_ = AStack_74._53_3_;
                                                  value_20.lastTimeStamp = AStack_74.lastTimeStamp;
                                                  value_20.avatarModifierPackageType =
                                                       AStack_74.avatarModifierPackageType;
                                                  value_20.avatarModifierPackageAdditionPolicy =
                                                       AStack_74.
                                                       avatarModifierPackageAdditionPolicy;
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
                                                  pFVar2 = AvatarModifierPackageFactory_Const
                                                                     (-20.0,(MethodInfo *)0x0);
                                                  MStack_80._pinnable = (IPinnable *)0x0;
                                                  MStack_80._pointer = (Void *)0x0;
                                                  MStack_80._handle.handle = (void *)0x0;
                                                  mscorlib.dll::System::Buffers::MemoryHandle::
                                                  MemoryHandle__ctor(&MStack_80,(Void *)0x1,
                                                                     (GCHandle)0xe,
                                                                     (IPinnable *)pFVar2,
                                                                     (MethodInfo *)0x0);
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length == 0)
                                                    goto code_?;
                                                    pAVar1->vector[0].avatarModifierType =
                                                         (int32_t)MStack_80._pointer;
                                                    pAVar1->vector[0].avatarModifierEffect =
                                                         (int32_t)MStack_80._handle.handle;
                                                    pAVar1->vector[0].value =
                                                         (Func_1_Single_ *)MStack_80._pinnable;
                                                    func_?(&pAVar1->vector[0].value,0);
                                                    pFVar2 = AvatarModifierPackageFactory_Const
                                                                       (20.0,(MethodInfo *)0x0);
                                                    MStack_81._pinnable = (IPinnable *)0x0;
                                                    MStack_81._pointer = (Void *)0x0;
                                                    MStack_81._handle.handle = (void *)0x0;
                                                    mscorlib.dll::System::Buffers::MemoryHandle::
                                                    MemoryHandle__ctor(&MStack_81,(Void *)0x1,
                                                                       (GCHandle)0x14,
                                                                       (IPinnable *)pFVar2,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar1->max_length < 2)
                                                    goto code_?;
                                                    pAVar1->vector[1].avatarModifierType =
                                                         (int32_t)MStack_81._pointer;
                                                    pAVar1->vector[1].avatarModifierEffect =
                                                         (int32_t)MStack_81._handle.handle;
                                                    pAVar1->vector[1].value =
                                                         (Func_1_Single_ *)MStack_81._pinnable;
                                                    func_?(&pAVar1->vector[1].value,0);
                                                    pDVar28 = (
                                                  Dictionary_2_System_Object_System_Object_ *)
                                                  func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  if (pDVar28 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    Unity.Postprocessing.Runtime.dll::UnityEngine::
                                                    Rendering::PostProcessing::
                                                    ParameterOverride`1[System::Object]::
                                                    ParameterOverride_1_System_Object___ctor
                                                              ((ParameterOverride_1_System_Object_ *
                                                               )pDVar28,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (pDVar28,(Object *)0x4,(Object *)0x2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (pDVar28,(Object *)0x1,(Object *)0x2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  );
                                                  func_?(auStack_82,0,0x44);
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            ((AvatarModifierPackage *)auStack_82,
                                                             AvatarModifierPackageType__Enum_RayHeal
                                                             ,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Add,0.2,
                                                  pAVar1,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar28,0,(MethodInfo *)0x0);
                                                  value_23.duration.currentCryptoKey =
                                                       auStack_82._4_4_;
                                                  value_23.id = auStack_82._0_4_;
                                                  value_23.duration.hiddenValue.b1 = auStack_82[8];
                                                  value_23.duration.hiddenValue.b2 = auStack_82[9];
                                                  value_23.duration.hiddenValue.b3 = auStack_82[10]
                                                  ;
                                                  value_23.duration.hiddenValue.b4 =
                                                       auStack_82[0xb];
                                                  value_23.duration.hiddenValueOld =
                                                       (Byte__Array *)auStack_82._12_4_;
                                                  value_23.duration.fakeValue =
                                                       (float)auStack_82._16_4_;
                                                  value_23.duration._16_4_ = auStack_82._20_4_;
                                                  value_23.avatarModifiers = pAStack_83;
                                                  value_23.actionsToTakeVsTypes = pDStack_84;
                                                  value_23.timeStamp.currentCryptoKey = iStack_85;
                                                  value_23.timeStamp.hiddenValue = AStack_86;
                                                  value_23.timeStamp.hiddenValueOld = pBStack_87;
                                                  value_23.timeStamp.fakeValue = fStack_88;
                                                  value_23.timeStamp.inited = AStack_89.b1;
                                                  value_23.timeStamp._17_1_ = AStack_89.b2;
                                                  value_23.timeStamp._18_1_ = AStack_89.b3;
                                                  value_23.timeStamp._19_1_ = AStack_89.b4;
                                                  value_23._52_4_ = pBStack_78;
                                                  value_23.lastTimeStamp = (float)ppMStack_77;
                                                  value_23.avatarModifierPackageType =
                                                       (int32_t)ppMStack_76;
                                                  value_23.avatarModifierPackageAdditionPolicy =
                                                       (int32_t)pAStack_75;
                                                  AVar90 = AStack_89;
                                                  pBVar91 = pBStack_78;
                                                  ppMVar92 = ppMStack_77;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__Add
                                                            (this,0x12,value_23,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  );
                                                  fVar93 = 1.4013e-45;
                                                  puVar94 = &UNK_?;
                                                  pAVar95 = 
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier;
                                                  pAVar1 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  func_?();
                                                  pFVar2 = AvatarModifierPackageFactory_Const
                                                                     (7.0,(MethodInfo *)0x0);
                                                  MStack_96._pinnable = (IPinnable *)0x0;
                                                  MStack_96._pointer = (Void *)0x0;
                                                  MStack_96._handle.handle = (void *)0x0;
                                                  mscorlib.dll::System::Buffers::MemoryHandle::
                                                  MemoryHandle__ctor(&MStack_96,(Void *)0x1,
                                                                     (GCHandle)0x1c,
                                                                     (IPinnable *)pFVar2,
                                                                     (MethodInfo *)0x0);
                                                  if (pAVar1 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if (pAVar1->max_length != 0) {
                                                      pAVar1->vector[0].avatarModifierType =
                                                           (int32_t)MStack_96._pointer;
                                                      pAVar1->vector[0].avatarModifierEffect =
                                                           (int32_t)MStack_96._handle.handle;
                                                      pAVar1->vector[0].value =
                                                           (Func_1_Single_ *)MStack_96._pinnable;
                                                      func_?(&pAVar1->vector[0].value,0);
                                                      func_?(&stack0xfffff6e8,0,0x44);
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
                                                  value_18.duration.currentCryptoKey =
                                                       auStack_82._16_4_;
                                                  value_18.id = auStack_82._12_4_;
                                                  value_18.duration.hiddenValue =
                                                       (ACTkByte4)auStack_82._20_4_;
                                                  value_18.duration.hiddenValueOld =
                                                       (Byte__Array *)pAStack_83;
                                                  value_18.duration.fakeValue =
                                                       (float)
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  ;
                                                  value_18.duration._16_4_ = iStack_85;
                                                  value_18.avatarModifiers =
                                                       (AvatarModifierPackage_AvatarModifier__Array
                                                        *)AStack_86;
                                                  value_18.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pBStack_87;
                                                  value_18.timeStamp.currentCryptoKey =
                                                       (int32_t)fStack_88;
                                                  value_18.timeStamp.hiddenValue = AVar90;
                                                  value_18.timeStamp.hiddenValueOld = pBVar91;
                                                  value_18.timeStamp.fakeValue = (float)ppMVar92;
                                                  value_18.timeStamp._16_4_ = puVar94;
                                                  value_18._52_4_ = pAVar95;
                                                  value_18.lastTimeStamp = fVar93;
                                                  value_18.avatarModifierPackageType = iStack_97;
                                                  value_18.avatarModifierPackageAdditionPolicy =
                                                       iStack_98;
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
  pcVar99 = (code *)swi(3);
  (*pcVar99)();
  return;
}

