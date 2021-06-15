
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
               int32_t id,AvatarModifierPackage_AvatarModifier__Array *additionalModifers,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (modifierPackageType == AvatarModifierPackageType__Enum_None) {
    return;
  }
  if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  pAVar1 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                      (&AStack_2,modifierPackageType,(MethodInfo *)0x0);
  pvVar3 = (void *)pAVar1->id;
  iVar4 = (pAVar1->duration).currentCryptoKey;
  AVar5 = (pAVar1->duration).hiddenValue;
  pBVar6 = (pAVar1->duration).hiddenValueOld;
  fVar7 = (pAVar1->duration).fakeValue;
  pbVar8 = &(pAVar1->duration).inited;
  uVar9 = *(undefined4 *)pbVar8;
  first = pAVar1->avatarModifiers;
  uStack_10 = *(undefined8 *)pbVar8;
  pDVar11 = pAVar1->actionsToTakeVsTypes;
  pSVar12 = (ScaleAnimationBase__Class *)(pAVar1->timeStamp).currentCryptoKey;
  AVar13 = (pAVar1->timeStamp).hiddenValue;
  pBVar14 = (pAVar1->timeStamp).hiddenValueOld;
  fVar15 = (pAVar1->timeStamp).fakeValue;
  fVar16 = *(float *)&(pAVar1->timeStamp).inited;
  fVar17 = *(float *)&pAVar1->persistant;
  fVar18 = (float)pAVar1->avatarModifierPackageType;
  pTVar19 = (Transform *)pAVar1->avatarModifierPackageAdditionPolicy;
  if (additionalModifers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    fStack_20 = fVar7;
    pDStack_21 = pDVar11;
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_3
                       ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)first,
                        (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchema_ *)additionalModifers,
                        System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                       );
    first = (AvatarModifierPackage_AvatarModifier__Array *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                      ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                       AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
                      );
    uStack_10 = CONCAT44(first,uVar9);
  }
  fStack_20 = fVar7;
  pDStack_21 = pDVar11;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  method_00 = TypeInfo__AvatarModifierPackages___AddModifierPackage_c__AnonStorey1;
  this_03 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  if (this_03 == (ScaleAnimationBase *)0x0) goto code_?;
  this_00 = &this_03->fields;
  (this_00->_)._._._.m_CachedPtr = pvVar3;
  (this_03->fields).state = iVar4;
  (this_03->fields).originalScale.x = (float)AVar5;
  (this_03->fields).originalScale.y = (float)pBVar6;
  (this_03->fields).originalScale.z = fStack_20;
  (this_03->fields).target = (Transform *)uStack_10;
  (this_03->fields).testState = uStack_10._4_4_;
  (this_03->fields).OnScaleAnimationStopped =
       (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pDStack_21;
  this_03[1].klass = pSVar12;
  this_03[1].monitor = (MonitorData *)AVar13;
  this_03[1].fields._._._._.m_CachedPtr = pBVar14;
  this_03[1].fields.state = (int32_t)fVar15;
  this_03[1].fields.originalScale.x = fVar16;
  this_03[1].fields.originalScale.y = fVar17;
  this_03[1].fields.originalScale.z = fVar18;
  this_03[1].fields.target = pTVar19;
  (this_00->_)._._._.m_CachedPtr = (void *)id;
  bVar22 = AvatarModifierPackages_HandleNewAvatarModifierPackage
                     (this,*(AvatarModifierPackage *)this_00,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    first = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
    pOVar23 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
              TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,(MethodInfo *)0x0
                        );
    if (pOVar23 == (Object *)0x1) {
      this_01 = (List_1_VoxelHit_ *)(this->fields).packages;
      pPStack_24 = (Predicate_1_VoxelHit_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)pPStack_24,(Object *)this_03,
                 MethodInfo__AvatarModifierPackages___AddModifierPackage_c__AnonStorey1____m__0_AvatarModifierPackage_
                 ,
                 MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_VoxelHit_ *)0x0) goto code_?;
      iVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__FindIndex
                         (this_01,pPStack_24,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                         );
      if (iVar4 != -1) {
        if ((this->fields).packages == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        piVar25 = (int32_t *)func_?();
        AStack_2.id = *piVar25;
        AStack_2.duration.currentCryptoKey = piVar25[1];
        AStack_2.duration.hiddenValue = *(ACTkByte4 *)(piVar25 + 2);
        AStack_2.duration.hiddenValueOld = (Byte__Array *)piVar25[3];
        AStack_2.duration.fakeValue = (float)piVar25[4];
        AStack_2.duration._16_4_ = piVar25[5];
        AStack_2.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar25[6];
        AStack_2.actionsToTakeVsTypes =
             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar25[7];
        AStack_2.timeStamp.currentCryptoKey = piVar25[8];
        AStack_2.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar25 + 9);
        AStack_2.timeStamp.hiddenValueOld = (Byte__Array *)piVar25[10];
        AStack_2.timeStamp.fakeValue = (float)piVar25[0xb];
        AStack_2.timeStamp._16_4_ = piVar25[0xc];
        AStack_2._52_4_ = piVar25[0xd];
        AStack_2.avatarModifierPackageType = piVar25[0xe];
        AStack_2.avatarModifierPackageAdditionPolicy = piVar25[0xf];
        func_?();
        pLVar26 = (this->fields).packages;
        if (pLVar26 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        value.duration.currentCryptoKey = AStack_2.duration.currentCryptoKey;
        value.id = AStack_2.id;
        value.duration.hiddenValue = AStack_2.duration.hiddenValue;
        value.duration.hiddenValueOld = AStack_2.duration.hiddenValueOld;
        value.duration.fakeValue = AStack_2.duration.fakeValue;
        value.duration.inited = AStack_2.duration.inited;
        value.duration._17_3_ = AStack_2.duration._17_3_;
        value.avatarModifiers = AStack_2.avatarModifiers;
        value.actionsToTakeVsTypes = AStack_2.actionsToTakeVsTypes;
        value.timeStamp.currentCryptoKey = AStack_2.timeStamp.currentCryptoKey;
        value.timeStamp.hiddenValue = AStack_2.timeStamp.hiddenValue;
        value.timeStamp.hiddenValueOld = AStack_2.timeStamp.hiddenValueOld;
        value.timeStamp.fakeValue = AStack_2.timeStamp.fakeValue;
        value.timeStamp.inited = AStack_2.timeStamp.inited;
        value.timeStamp._17_3_ = AStack_2.timeStamp._17_3_;
        value.persistant = AStack_2.persistant;
        value._53_3_ = AStack_2._53_3_;
        value.avatarModifierPackageType = AStack_2.avatarModifierPackageType;
        value.avatarModifierPackageAdditionPolicy = AStack_2.avatarModifierPackageAdditionPolicy;
        mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
        List_1_AvatarModifierPackage__set_Item
                  (pLVar26,iVar4,value,
                   MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                  );
        goto code_?;
      }
    }
    pLVar26 = (this->fields).packages;
    if (pLVar26 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    first = (AvatarModifierPackage_AvatarModifier__Array *)this_03[1].fields.originalScale.x;
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__Add
              (pLVar26,*(AvatarModifierPackage *)this_00,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
              );
  }
code_?:
  uVar27 = 0;
  if (first != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    pAVar28 = first->vector;
    while( true ) {
      if ((int)first->max_length <= (int)uVar27) {
        return;
      }
      if (first->max_length <= uVar27) break;
      uVar29._0_4_ = pAVar28->avatarModifierType;
      uVar29._4_4_ = pAVar28->avatarModifierEffect;
      uStack_10 = uVar29;
      if (((uVar29._4_4_ == 7) || (uVar29._4_4_ == 8)) &&
         (pPStack_24 = (Predicate_1_VoxelHit_ *)(this->fields).OnUnequipItemEvent,
         pPStack_24 != (Predicate_1_VoxelHit_ *)0x0)) {
        if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
          func_?();
        }
        if (pPStack_24 == (Predicate_1_VoxelHit_ *)0x0) goto code_?;
        first = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)pPStack_24,(Object *)this,
                   (InitializedGameQueryDataEventArgs *)
                   TypeInfo__System__EventArgs->static_fields->Empty,
                   MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                  );
      }
      if ((uVar29._4_4_ == 9) &&
         (this_02 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    (this->fields).OnDisableVehiclesEvent,
         this_02 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)) {
        if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
          func_?();
        }
        if (this_02 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
        first = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  (this_02,(Object *)this,
                   (InitializedGameQueryDataEventArgs *)
                   TypeInfo__System__EventArgs->static_fields->Empty,
                   MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                  );
      }
      uVar27 = uVar27 + 1;
      pAVar28 = pAVar28 + 1;
    }
    func_?();
    func_?();
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void AddModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffb8,0,0x40);
  method_00 = TypeInfo__AvatarModifierPackages___AddModifierPackage_c__AnonStorey1;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
  this_00 = &this_02->fields;
  (this_00->_)._._._.m_CachedPtr = (void *)modifierPackage.id;
  (this_02->fields).state = modifierPackage.duration.currentCryptoKey;
  (this_02->fields).originalScale.x = (float)modifierPackage.duration.hiddenValue;
  (this_02->fields).originalScale.y = (float)modifierPackage.duration.hiddenValueOld;
  (this_02->fields).originalScale.z = modifierPackage.duration.fakeValue;
  (this_02->fields).target = (Transform *)modifierPackage.duration._16_4_;
  (this_02->fields).testState = (int32_t)modifierPackage.avatarModifiers;
  (this_02->fields).OnScaleAnimationStopped =
       (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)modifierPackage.actionsToTakeVsTypes;
  this_02[1].klass = (ScaleAnimationBase__Class *)modifierPackage.timeStamp.currentCryptoKey;
  this_02[1].monitor = (MonitorData *)modifierPackage.timeStamp.hiddenValue;
  this_02[1].fields._._._._.m_CachedPtr = modifierPackage.timeStamp.hiddenValueOld;
  this_02[1].fields.state = (int32_t)modifierPackage.timeStamp.fakeValue;
  this_02[1].fields.originalScale.x = (float)modifierPackage.timeStamp._16_4_;
  this_02[1].fields.originalScale.y = (float)modifierPackage._52_4_;
  this_02[1].fields.originalScale.z = (float)modifierPackage.avatarModifierPackageType;
  this_02[1].fields.target = (Transform *)modifierPackage.avatarModifierPackageAdditionPolicy;
  (this_00->_)._._._.m_CachedPtr = (void *)id;
  bVar1 = AvatarModifierPackages_HandleNewAvatarModifierPackage
                    (this,*(AvatarModifierPackage *)this_00,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pOVar2 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
           TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                     ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,(MethodInfo *)0x0);
  if (pOVar2 == (Object *)0x1) {
    this_01 = (List_1_VoxelHit_ *)(this->fields).packages;
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)this_02,
               MethodInfo__AvatarModifierPackages___AddModifierPackage_c__AnonStorey1____m__0_AvatarModifierPackage_
               ,
               MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
              );
    if (this_01 == (List_1_VoxelHit_ *)0x0) goto code_?;
    index = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__FindIndex
                      (this_01,(Predicate_1_VoxelHit_ *)this_03,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                      );
    if (index != -1) {
      if ((this->fields).packages != (List_1_AvatarModifierPackage_ *)0x0) {
        puVar3 = (undefined4 *)func_?();
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[6];
        uVar9 = puVar3[7];
        uVar10 = puVar3[10];
        uVar11 = puVar3[0xb];
        uVar12 = puVar3[0xe];
        puVar13 = &UNK_?;
        func_?();
        pLVar14 = (this->fields).packages;
        if (pLVar14 != (List_1_AvatarModifierPackage_ *)0x0) {
          value.duration.currentCryptoKey = uVar5;
          value.id = uVar4;
          value.duration.hiddenValue.b1 = (char)uVar6;
          value.duration.hiddenValue.b2 = (char)((uint)uVar6 >> 8);
          value.duration.hiddenValue.b3 = (char)((uint)uVar6 >> 0x10);
          value.duration.hiddenValue.b4 = (char)((uint)uVar6 >> 0x18);
          value.duration.hiddenValueOld = (Byte__Array *)uVar7;
          value.duration.fakeValue = (float)uVar6;
          value.duration._16_4_ = uVar7;
          value.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)uVar8;
          value.actionsToTakeVsTypes =
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)uVar9;
          value.timeStamp.currentCryptoKey = uVar8;
          value.timeStamp.hiddenValue.b1 = (char)uVar9;
          value.timeStamp.hiddenValue.b2 = (char)((uint)uVar9 >> 8);
          value.timeStamp.hiddenValue.b3 = (char)((uint)uVar9 >> 0x10);
          value.timeStamp.hiddenValue.b4 = (char)((uint)uVar9 >> 0x18);
          value.timeStamp.hiddenValueOld = (Byte__Array *)uVar10;
          value.timeStamp.fakeValue = (float)uVar11;
          value.timeStamp._16_4_ = uVar10;
          value._52_4_ = uVar11;
          value.avatarModifierPackageType = uVar12;
          value.avatarModifierPackageAdditionPolicy = (int32_t)puVar13;
          mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
          List_1_AvatarModifierPackage__set_Item
                    (pLVar14,index,value,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                    );
          return;
        }
      }
      goto code_?;
    }
  }
  pLVar14 = (this->fields).packages;
  if (pLVar14 != (List_1_AvatarModifierPackage_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__Add
              (pLVar14,*(AvatarModifierPackage *)this_00,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
              );
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 != (List_1_AvatarModifierPackage_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    do {
      if ((int)index < 0) {
        return;
      }
      this_00 = (Action_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).OnModifierExpired
      ;
      if (this_00 != (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
        pLVar1 = (this->fields).packages;
        if ((pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) ||
           (pRVar3 = (RaycastResult *)
                     func_?(auStack_4,pLVar1,index,
                                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                    ),
           this_00 == (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0)) break;
        mscorlib.dll::System::Action`1[UnityEngine::EventSystems::RaycastResult]::
        Action_1_UnityEngine_EventSystems_RaycastResult__Invoke(this_00,*pRVar3,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).packages;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
      List_1_AvatarModifierPackage__RemoveAt
                (pLVar1,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                );
      index = index + -1;
    } while( true );
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ClearNonPersistantModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearNonPersistantModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 != (List_1_AvatarModifierPackage_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                      );
    do {
      do {
        index = (Object *)((int)&index[-1].monitor + 3);
        if ((int)index < 0) {
          return;
        }
        pLVar1 = (this->fields).packages;
        if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        pAVar2 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                 List_1_AvatarModifierPackage__get_Item
                           (&AStack_3,pLVar1,(int32_t)index,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                           );
        iStack_4 = pAVar2->id;
        iStack_5 = (pAVar2->duration).currentCryptoKey;
        AStack_6 = (pAVar2->duration).hiddenValue;
        pBStack_7 = (pAVar2->duration).hiddenValueOld;
        fStack_8 = (pAVar2->duration).fakeValue;
        uStack_9 = *(undefined4 *)&(pAVar2->duration).inited;
        pAStack_10 = pAVar2->avatarModifiers;
        pDStack_11 = pAVar2->actionsToTakeVsTypes;
        iStack_12 = (pAVar2->timeStamp).currentCryptoKey;
        AStack_13 = (pAVar2->timeStamp).hiddenValue;
        pBStack_14 = (pAVar2->timeStamp).hiddenValueOld;
        fStack_15 = (pAVar2->timeStamp).fakeValue;
      } while (pAVar2->persistant != 0);
      this_00 = (Action_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).OnModifierExpired
      ;
      if (this_00 != (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
        pLVar1 = (this->fields).packages;
        if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) break;
        AStack_3.id = (int32_t)
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
        ;
        pRVar16 = (RaycastResult *)func_?(&AStack_3,pLVar1,index);
        if (this_00 == (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) break;
        mscorlib.dll::System::Action`1[UnityEngine::EventSystems::RaycastResult]::
        Action_1_UnityEngine_EventSystems_RaycastResult__Invoke(this_00,*pRVar16,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).packages;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
      List_1_AvatarModifierPackage__RemoveAt
                (pLVar1,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                );
    } while( true );
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Dictionary`2[System.Int32,System.Single] ComputeModifierEffectGroupedById(AvatarModifierEffect,
   Single) */

Dictionary_2_System_Int32_System_Single_ *
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
          (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,float baseValue,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe7c;
  puVar5 = &stack0xfffffe7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&pLStack_6,0,0x4c);
  LStack_7.fields._NextReward_k__BackingField.value = 0;
  iStack_8 = 0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  LStack_7.klass = (LevelRewardsManager__Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_7.fields._NextReward_k__BackingField.key = 0;
  func_?();
  fStack_10 = -NAN;
  piStack_11 = (int *)&stack0xfffffe7c;
  puStack_4 = &stack0xfffffe7c;
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                              );
  pDStack_12 = this_01;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
            );
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).packages;
  pDStack_13 = this_01;
  if (this_00 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult_ *)
                        &stack0xfffffe88,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_6 = pLVar14->l;
    iStack_15 = pLVar14->next;
    iStack_16 = pLVar14->ver;
    pGStack_17 = (pLVar14->current).m_GameObject;
    pBStack_18 = (pLVar14->current).module;
    fStack_19 = (pLVar14->current).distance;
    fStack_20 = (pLVar14->current).index;
    iStack_21 = (pLVar14->current).depth;
    iStack_22 = (pLVar14->current).sortingLayer;
    iStack_23 = (pLVar14->current).sortingOrder;
    fStack_24 = (pLVar14->current).worldPosition.x;
    fStack_25 = (pLVar14->current).worldPosition.y;
    fStack_26 = (pLVar14->current).worldPosition.z;
    fStack_27 = (pLVar14->current).worldNormal.x;
    fStack_28 = (pLVar14->current).worldNormal.y;
    fStack_29 = (pLVar14->current).worldNormal.z;
    VStack_30 = (pLVar14->current).screenPosition;
    iStack_31 = (pLVar14->current).displayIndex;
    uStack_1 = 0;
    while (cVar32 = func_?(), cVar32 != '\0') {
      piVar33 = (int32_t *)func_?();
      iVar34 = 0;
      iVar35 = *piVar33;
      pDStack_36 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)piVar33[6];
      while( true ) {
        if (pDStack_36 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        if ((int)(pDStack_36->fields).linkSlots <= iVar34) break;
        puVar37 = (undefined8 *)func_?();
        uStack_38 = *puVar37;
        pMVar39 = *(ManualResetEvent **)(puVar37 + 1);
        uStack_40 = (undefined4)uStack_38;
        AStack_41 = (AvatarModifierEffect__Enum)((ulonglong)uStack_38 >> 0x20);
        if (AStack_41 == modifierEffect) {
          if (this_01 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          bVar42 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar35,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                            );
          if (bVar42 == 0) {
            this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
            List_1_UnityEngine_Vector4___ctor
                      (this_02,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                      );
            this_01 = pDStack_12;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_12,iVar35,
                       (Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                      );
          }
          this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_01,iVar35,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                              );
          if (this_03 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
          item.m_DelagateState = (Object *)AStack_41;
          item.m_DelagateCallback = (SendOrPostCallback *)uStack_40;
          item.m_WaitHandle = pMVar39;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                    ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_03,item,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                    );
        }
        iVar34 = iVar34 + 1;
      }
    }
    *piStack_11 = 0xb3;
    pDStack_12 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_8 == 0) {
      if (*piStack_11 == 0xb3) {
        pDStack_12 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0xffffffff;
      }
      this_04 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)func_?();
      pDStack_13 = this_04;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_04,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
      pDStack_36 = this_04;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        pDVar43 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_44,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__GetEnumerator__
                           );
        LStack_7.klass = (LevelRewardsManager__Class *)pDVar43->dictionary;
        LStack_7.monitor = (MonitorData *)pDVar43->next;
        LStack_7.fields.unseenLevelRewards =
             (Dictionary_2_System_Int32_System_Int32_ *)pDVar43->stamp;
        LStack_7.fields._NextReward_k__BackingField.key = (pDVar43->current).key;
        LStack_7.fields._NextReward_k__BackingField.value = (int32_t)(pDVar43->current).value;
        uStack_1 = 2;
        while( true ) {
          cVar32 = func_?();
          iVar34 = iStack_8;
          if (cVar32 == '\0') break;
          KStack_9 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                (&LStack_7,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Current__
                                );
          this_05 = (List_1_VoxelHit_ *)func_?();
          if (TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache1 ==
              (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
            this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_06,(Object *)0x0,
                       MethodInfo__AvatarModifierPackages___ComputeModifierEffectGroupedById_m__1_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                       ,
                       MethodInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>__Comparison_System__Object__void__
                      );
            TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache1 =
                 (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)this_06;
          }
          if (this_05 == (List_1_VoxelHit_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_2
                    (this_05,(Comparison_1_VoxelHit_ *)
                             TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache1,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                    );
          this = (AvatarModifierPackages *)baseValue;
          iVar34 = 0;
          while( true ) {
            this_07 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
            if (this_07 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
            goto code_?;
            pOVar45 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                (this_07,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                                );
            if ((int)pOVar45 <= iVar34) break;
            iVar46 = func_?();
            if (iVar46 == 0) goto code_?;
            puVar37 = (undefined8 *)func_?();
            LStack_7.fields.OnRewardsReturned = (Action *)*puVar37;
            uStack_40 = (undefined4)((ulonglong)*puVar37 >> 0x20);
            if (LStack_7.fields.OnRewardsReturned == (Action *)0x0) {
              iVar46 = func_?();
              if (iVar46 == 0) goto code_?;
              puVar37 = (undefined8 *)func_?();
              uStack_47 = *puVar37;
              if (*(Func_1_Single_ **)(puVar37 + 1) == (Func_1_Single_ *)0x0) goto code_?;
              fStack_10 = System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                                    (*(Func_1_Single_ **)(puVar37 + 1),
                                     MethodInfo__System__Func<float>__Invoke__);
              this = (AvatarModifierPackages *)(fStack_10 * (float)this);
              iVar34 = iVar34 + 1;
            }
            else if (LStack_7.fields.OnRewardsReturned == (Action *)0x1) {
              iVar46 = func_?();
              if (iVar46 == 0) goto code_?;
              puVar37 = (undefined8 *)func_?();
              uStack_47 = *puVar37;
              if (*(Func_1_Single_ **)(puVar37 + 1) == (Func_1_Single_ *)0x0) goto code_?;
              fStack_10 = System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                                    (*(Func_1_Single_ **)(puVar37 + 1),
                                     MethodInfo__System__Func<float>__Invoke__);
              this = (AvatarModifierPackages *)(fStack_10 + (float)this);
              iVar34 = iVar34 + 1;
            }
            else {
              if (LStack_7.fields.OnRewardsReturned == (Action *)0x2) {
                iVar46 = func_?();
                if (iVar46 == 0) goto code_?;
                puVar37 = (undefined8 *)func_?();
                uStack_47 = *puVar37;
                if (*(Func_1_Single_ **)(puVar37 + 1) == (Func_1_Single_ *)0x0)
                goto code_?;
                this = (AvatarModifierPackages *)
                       System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                                 (*(Func_1_Single_ **)(puVar37 + 1),
                                  MethodInfo__System__Func<float>__Invoke__);
              }
              iVar34 = iVar34 + 1;
            }
          }
          iVar35 = func_?();
          this_04 = pDStack_13;
          if (pDStack_13 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__Add
                    ((Dictionary_2_System_Int32_System_Single_ *)pDStack_13,iVar35,(float)this,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                    );
        }
        piStack_11[(int)((int)&pDStack_12->klass + 1)] = 0x1f0;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar34 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return (Dictionary_2_System_Int32_System_Single_ *)this_04;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  pDVar49 = (Dictionary_2_System_Int32_System_Single_ *)(*pcVar48)();
  return pDVar49;
}


/* ModifierActions GetActionToTakeWithPackageType(AvatarModifierPackageType) */

ModifierActions__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffec8;
  puVar6 = &stack0xfffffec8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  func_?(&pLStack_7,0,0x4c);
  uStack_8 = 0;
  iStack_9 = 0;
  MStack_10 = ModifierActions__Enum_Add;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  func_?();
  iStack_15 = -1;
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).packages;
  puStack_16 = &stack0xfffffec8;
  puStack_5 = &stack0xfffffec8;
  if (this_00 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
code_?:
    iVar17 = func_?(0);
code_?:
    iVar17 = func_?(iVar17,0,0);
  }
  else {
    puStack_16 = &stack0xfffffec8;
    puStack_5 = &stack0xfffffec8;
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       (&LStack_19,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_7 = pLVar18->l;
    iStack_20 = pLVar18->next;
    iStack_21 = pLVar18->ver;
    pGStack_22 = (pLVar18->current).m_GameObject;
    pBStack_23 = (pLVar18->current).module;
    fStack_24 = (pLVar18->current).distance;
    fStack_25 = (pLVar18->current).index;
    iStack_26 = (pLVar18->current).depth;
    iStack_27 = (pLVar18->current).sortingLayer;
    iStack_28 = (pLVar18->current).sortingOrder;
    fStack_29 = (pLVar18->current).worldPosition.x;
    fStack_30 = (pLVar18->current).worldPosition.y;
    fStack_31 = (pLVar18->current).worldPosition.z;
    fStack_32 = (pLVar18->current).worldNormal.x;
    fStack_33 = (pLVar18->current).worldNormal.y;
    fStack_34 = (pLVar18->current).worldNormal.z;
    VStack_35 = (pLVar18->current).screenPosition;
    iStack_36 = (pLVar18->current).displayIndex;
    uStack_1 = 0;
    uStack_2 = 0;
    iVar17 = -1;
    puVar6 = &stack0xfffffec8;
    while (iVar37 = iVar17,
          cVar38 = func_?(&pLStack_7,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                 ), cVar38 != '\0') {
      puVar39 = (undefined4 *)
               func_?(&LStack_19.current,&pLStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                              );
      uStack_40 = *puVar39;
      uStack_41 = puVar39[1];
      uStack_42 = puVar39[2];
      uStack_43 = puVar39[3];
      this_01 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)puVar39[7];
      uStack_44 = puVar39[8];
      uStack_45 = puVar39[9];
      uStack_46 = puVar39[10];
      uStack_47 = puVar39[0xb];
      uStack_48 = puVar39[0xc];
      uStack_49 = puVar39[0xd];
      uStack_50 = puVar39[0xe];
      uStack_51 = puVar39[0xf];
      iVar17 = iVar37;
      if (this_01 != (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
        pDVar52 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__get_Keys
                           ((Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                           );
        if (pDVar52 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)
                      0x0) goto code_?;
        puVar39 = (undefined4 *)
                 func_?(auStack_53,pDVar52,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                                );
        uStack_11 = *puVar39;
        uStack_12 = puVar39[1];
        uStack_13 = puVar39[2];
        uStack_14 = puVar39[3];
        uStack_8 = puVar39[4];
        uStack_1 = 1;
        do {
          cVar38 = func_?(&uStack_11,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                                 );
          if (cVar38 == '\0') {
            iStack_15 = iVar37 + 1;
            uStack_1 = 0;
            *(undefined4 *)(puVar6 + iStack_15 * 4) = 0x7e;
            goto code_?;
          }
          key = func_?();
        } while (key != modifierPackageType);
        if (this_01 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0)
        goto code_?;
        MStack_10 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[AvatarModifierPackageType,ModifierActions]::
                    Dictionary_2_AvatarModifierPackageType_ModifierActions__get_Item
                              (this_01,key,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                              );
        iStack_15 = iVar37 + 1;
        uStack_1 = 0;
        *(undefined4 *)(puVar6 + iStack_15 * 4) = 0x9f;
code_?:
        iVar54 = iVar37 + 1;
        func_?();
        iVar17 = iStack_9;
        if (iStack_9 != 0) goto code_?;
        iVar17 = iVar54;
        puVar6 = puStack_16;
        if (iVar54 != -1) {
          if (*(int *)(puStack_16 + iVar54 * 4) == 0x9f) goto code_?;
          if ((*(int *)(puStack_16 + iVar54 * 4) == 0x7e) &&
             (iVar17 = iVar37, iStack_15 = iVar37, iVar54 < 0)) {
            iVar17 = iVar54;
            iStack_15 = iVar54;
          }
        }
      }
    }
    *(undefined4 *)(puVar6 + (iVar37 + 1) * 4) = 0x9d;
code_?:
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    func_?(&pLStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    iVar17 = iStack_9;
    if (iStack_9 == 0) {
      if ((iVar37 + 1 == -1) || (*(int *)(puVar6 + (iVar37 + 1) * 4) != 0x9f)) {
        MStack_10 = ModifierActions__Enum_Add;
      }
      *unaff_FS_OFFSET = uStack_4;
      return MStack_10;
    }
  }
  func_?(iVar17,0,0);
  pcVar55 = (code *)swi(3);
  MVar56 = (*pcVar55)();
  return MVar56;
}


/* AvatarModifierPackageType GetPackageToActWith(AvatarModifierPackageType, ModifierActions) */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          ModifierActions__Enum action,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff20;
  puVar5 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  AStack_7 = AvatarModifierPackageType__Enum_None;
  uStack_8 = 0;
  iStack_9 = 0;
  pDStack_10 = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  func_?();
  uStack_14 = 0xffffffff;
  puStack_15 = &stack0xffffff20;
  puStack_4 = &stack0xffffff20;
  if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
     && (puStack_15 = &stack0xffffff20, puStack_4 = &stack0xffffff20,
        (TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
    puStack_15 = &stack0xffffff20;
    puStack_4 = &stack0xffffff20;
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  pAVar16 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                     ((AvatarModifierPackage *)&stack0xffffff2c,modifierPackageType,
                      (MethodInfo *)0x0);
  this_00 = pAVar16->actionsToTakeVsTypes;
  if (this_00 != (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                        );
    if (this_01 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
code_?:
      func_?();
      pcVar17 = (code *)swi(3);
      AVar18 = (*pcVar17)();
      return AVar18;
    }
    pDVar19 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_20,
                        (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                        this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                       );
    pDStack_10 = (pDVar19->host_enumerator).dictionary;
    iStack_11 = (pDVar19->host_enumerator).next;
    iStack_12 = (pDVar19->host_enumerator).stamp;
    iStack_13 = (pDVar19->host_enumerator).current.key;
    pOStack_6 = (pDVar19->host_enumerator).current.value;
    uStack_1 = 0;
    do {
      cVar21 = func_?();
      if (cVar21 == '\0') {
        iVar22 = 0x6b;
        goto code_?;
      }
      AVar18 = func_?();
      MVar23 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[AvatarModifierPackageType,ModifierActions]::
              Dictionary_2_AvatarModifierPackageType_ModifierActions__get_Item
                        (this_00,AVar18,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                        );
    } while (MVar23 != action);
    iVar22 = 0x6d;
    AStack_7 = AVar18;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_9 != 0) {
      func_?();
      goto code_?;
    }
    if (iVar22 == 0x6d) goto code_?;
  }
  AStack_7 = AvatarModifierPackageType__Enum_None;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return AStack_7;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HandleModifierEffect
                (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
                float baseValue,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffeb0;
  puVar5 = &stack0xfffffeb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&pLStack_6,0,0x4c);
  func_?();
  puStack_7 = (undefined4 *)&stack0xfffffeb0;
  puStack_4 = &stack0xfffffeb0;
  pLVar8 = (List_1_VoxelHit_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                          );
  pLStack_9 = pLVar8;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pLVar8,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
            );
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).packages;
  pLStack_10 = pLVar8;
  if (this_00 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult_ *)
                        &stack0xfffffebc,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_6 = pLVar11->l;
    iStack_12 = pLVar11->next;
    iStack_13 = pLVar11->ver;
    pGStack_14 = (pLVar11->current).m_GameObject;
    pBStack_15 = (pLVar11->current).module;
    fStack_16 = (pLVar11->current).distance;
    fStack_17 = (pLVar11->current).index;
    iStack_18 = (pLVar11->current).depth;
    iStack_19 = (pLVar11->current).sortingLayer;
    iStack_20 = (pLVar11->current).sortingOrder;
    fStack_21 = (pLVar11->current).worldPosition.x;
    fStack_22 = (pLVar11->current).worldPosition.y;
    fStack_23 = (pLVar11->current).worldPosition.z;
    fStack_24 = (pLVar11->current).worldNormal.x;
    fStack_25 = (pLVar11->current).worldNormal.y;
    fStack_26 = (pLVar11->current).worldNormal.z;
    VStack_27 = (pLVar11->current).screenPosition;
    iStack_28 = (pLVar11->current).displayIndex;
    uStack_1 = 0;
    while (cVar29 = func_?(), pLVar8 = pLStack_9, cVar29 != '\0') {
      iVar30 = func_?();
      iVar31 = 0;
      iVar30 = *(int *)(iVar30 + 0x18);
      while( true ) {
        if (iVar30 == 0) goto code_?;
        if (*(int *)(iVar30 + 0xc) <= iVar31) break;
        puVar32 = (undefined8 *)func_?();
        uVar33 = *puVar32;
        uStack_34._4_4_ = (AvatarModifierEffect__Enum)((ulonglong)uVar33 >> 0x20);
        bVar35 = uStack_34._4_4_ == modifierEffect;
        uStack_34 = uVar33;
        if (bVar35) {
          if (pLStack_9 == (List_1_VoxelHit_ *)0x0) goto code_?;
          item.m_WaitHandle = *(ManualResetEvent **)(puVar32 + 1);
          item.m_DelagateCallback = (SendOrPostCallback *)(int)uVar33;
          item.m_DelagateState = (Object *)(int)((ulonglong)uVar33 >> 0x20);
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                    ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLStack_9,item,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                    );
        }
        iVar31 = iVar31 + 1;
      }
    }
    *puStack_7 = 0x83;
    uStack_1 = 0xffffffff;
    func_?();
    if (TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache0 ==
        (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AvatarModifierPackages___HandleModifierEffect_m__0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                 ,
                 MethodInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>__Comparison_System__Object__void__
                );
      TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache0 =
           (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)this_01;
    }
    if (pLVar8 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_2
                (pLVar8,(Comparison_1_VoxelHit_ *)
                        TypeInfo__AvatarModifierPackages->static_fields->__f__am_cache0,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                );
      this = (AvatarModifierPackages *)baseValue;
      index = (List_1_VoxelHit_ *)0x0;
      do {
        while( true ) {
          while( true ) {
            pLStack_9 = index;
            pOVar36 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8,
                                MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                               );
            if ((int)pOVar36 <= (int)index) {
              *unaff_FS_OFFSET = uStack_3;
              return (float)this;
            }
            pAVar37 = mscorlib.dll::System::Collections::Generic::
                      List`1[AvatarModifierPackage+AvatarModifier]::
                      List_1_AvatarModifierPackage_AvatarModifier__get_Item
                                (&AStack_38,(List_1_AvatarModifierPackage_AvatarModifier_ *)pLVar8,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                                );
            uStack_34._0_4_ = pAVar37->avatarModifierType;
            uStack_34._4_4_ = pAVar37->avatarModifierEffect;
            if ((undefined4)uStack_34 != 0) break;
            puVar32 = (undefined8 *)func_?();
            uStack_39 = *puVar32;
            if (*(Func_1_Single_ **)(puVar32 + 1) == (Func_1_Single_ *)0x0) goto code_?;
            fVar40 = System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                               (*(Func_1_Single_ **)(puVar32 + 1),
                                MethodInfo__System__Func<float>__Invoke__);
            this = (AvatarModifierPackages *)(fVar40 * (float)this);
            index = (List_1_VoxelHit_ *)((int)&index->klass + 1);
          }
          if ((undefined4)uStack_34 != 1) break;
          puVar32 = (undefined8 *)func_?();
          uStack_39 = *puVar32;
          if (*(Func_1_Single_ **)(puVar32 + 1) == (Func_1_Single_ *)0x0) goto code_?;
          fVar40 = System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                             (*(Func_1_Single_ **)(puVar32 + 1),
                              MethodInfo__System__Func<float>__Invoke__);
          this = (AvatarModifierPackages *)(fVar40 + (float)this);
          index = (List_1_VoxelHit_ *)((int)&index->klass + 1);
        }
        if ((undefined4)uStack_34 == 2) {
          puVar32 = (undefined8 *)func_?();
          uStack_39 = *puVar32;
          if (*(Func_1_Single_ **)(puVar32 + 1) == (Func_1_Single_ *)0x0) break;
          this = (AvatarModifierPackages *)
                 System.Core.dll::System::Func`1[Single]::Func_1_Single__Invoke
                           (*(Func_1_Single_ **)(puVar32 + 1),
                            MethodInfo__System__Func<float>__Invoke__);
        }
        index = (List_1_VoxelHit_ *)((int)&index->klass + 1);
      } while( true );
    }
  }
code_?:
  func_?();
  func_?();
  pcVar41 = (code *)swi(3);
  fVar42 = (float10)(*pcVar41)();
  return (float)fVar42;
}


/* Boolean HandleNewAvatarModifierPackage(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_HandleNewAvatarModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage newAvatarModifierPackage,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffec4;
  puVar5 = &stack0xfffffec4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&PStack_6,0,0x40);
  func_?(&pLStack_7,0,0x4c);
  uStack_8 = 0;
  iStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  func_?();
  iStack_14 = -1;
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).packages;
  bStack_15 = 1;
  iVar16 = -1;
  puStack_17 = &stack0xfffffec4;
  puStack_4 = &stack0xfffffec4;
  if (this_00 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
code_?:
    iVar18 = func_?(0);
code_?:
    func_?(iVar18,0,0);
  }
  else {
    puStack_17 = &stack0xfffffec4;
    puStack_4 = &stack0xfffffec4;
    pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       (&LStack_20,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_7 = pLVar19->l;
    iStack_21 = pLVar19->next;
    iStack_22 = pLVar19->ver;
    pGStack_23 = (pLVar19->current).m_GameObject;
    pBStack_24 = (pLVar19->current).module;
    fStack_25 = (pLVar19->current).distance;
    fStack_26 = (pLVar19->current).index;
    iStack_27 = (pLVar19->current).depth;
    iStack_28 = (pLVar19->current).sortingLayer;
    iStack_29 = (pLVar19->current).sortingOrder;
    fStack_30 = (pLVar19->current).worldPosition.x;
    fStack_31 = (pLVar19->current).worldPosition.y;
    fStack_32 = (pLVar19->current).worldPosition.z;
    fStack_33 = (pLVar19->current).worldNormal.x;
    fStack_34 = (pLVar19->current).worldNormal.y;
    fStack_35 = (pLVar19->current).worldNormal.z;
    VStack_36 = (pLVar19->current).screenPosition;
    iStack_37 = (pLVar19->current).displayIndex;
    uStack_1 = 0;
    iVar38 = -1;
    while (cVar39 = func_?(&pLStack_7,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                  ), iVar16 = iStack_9, cVar39 != '\0') {
      piVar40 = (int32_t *)
               func_?(&LStack_20.current,&pLStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                              );
      PStack_6.klass = (PlayerListsLayout_CreatePlayerLists_c_Iterator0__Class *)*piVar40;
      PStack_6.monitor = (MonitorData *)piVar40[1];
      PStack_6.fields.teams = (List_1_MV_WorldObject_MVTeam_ *)piVar40[2];
      PStack_6.fields._teamCount___0 = piVar40[3];
      PStack_6.fields._8_4_ = piVar40[4];
      PStack_6.fields._playerLists___0 =
           (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)piVar40[5];
      PStack_6.fields.players = (IEnumerable_1_MVPlayer_ *)piVar40[6];
      PStack_6.fields._sortedTeamLists___0 =
           (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)piVar40[7];
      PStack_6.fields._locvar0.dictionary =
           (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)piVar40[8];
      PStack_6.fields._locvar0.next = piVar40[9];
      PStack_6.fields._locvar0.stamp = piVar40[10];
      PStack_6.fields._locvar0.current.key = piVar40[0xb];
      PStack_6.fields._locvar0.current.value = (List_1_MVPlayer_ *)piVar40[0xc];
      PStack_6.fields._this = (PlayerListsLayout *)piVar40[0xd];
      PStack_6.fields._current = (Object *)piVar40[0xe];
      PStack_6.fields._52_4_ = piVar40[0xf];
      MStack_41 = ModifierActions__Enum_Add;
      if (newAvatarModifierPackage.actionsToTakeVsTypes !=
          (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
        pDVar42 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__get_Keys
                           ((Dictionary_2_WinningConditionType_System_Object_ *)
                            newAvatarModifierPackage.actionsToTakeVsTypes,
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                           );
        iVar16 = iVar38;
        if (pDVar42 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)
                      0x0) goto code_?;
        puVar43 = (undefined4 *)
                 func_?(auStack_44,pDVar42,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                                );
        uStack_10 = *puVar43;
        uStack_11 = puVar43[1];
        uStack_12 = puVar43[2];
        uStack_13 = puVar43[3];
        uStack_8 = puVar43[4];
        uStack_1 = CONCAT31(uStack_1._1_3_,1);
        do {
          cVar39 = func_?(&uStack_10,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                                 );
          MVar45 = MStack_41;
          if (cVar39 == '\0') goto code_?;
          pOVar46 = (Object *)func_?();
          pOVar47 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                    PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                              (&PStack_6,(MethodInfo *)0x0);
        } while (pOVar46 != pOVar47);
        if (newAvatarModifierPackage.actionsToTakeVsTypes ==
            (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) goto code_?;
        MVar45 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[AvatarModifierPackageType,ModifierActions]::
                 Dictionary_2_AvatarModifierPackageType_ModifierActions__get_Item
                           (newAvatarModifierPackage.actionsToTakeVsTypes,
                            (AvatarModifierPackageType__Enum)pOVar46,
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                           );
code_?:
        iVar16 = iVar38 + 1;
        uStack_1 = uStack_1 & 0xffffff00;
        *(undefined4 *)(puStack_17 + iVar16 * 4) = 0x8b;
        iStack_14 = iVar16;
        func_?();
        iVar18 = iStack_9;
        if (iStack_9 != 0) goto code_?;
        if (((iVar16 != -1) && (*(int *)(puStack_17 + iVar16 * 4) == 0x8b)) && (-1 < iVar16)) {
          iVar16 = iVar38;
          iStack_14 = iVar38;
        }
        iVar38 = iVar16;
        if (MVar45 == ModifierActions__Enum_Renew) {
          func_?(&PStack_6,0);
        }
        else if (MVar45 == ModifierActions__Enum_Replace) {
          pOVar46 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                   PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                             (&PStack_6,(MethodInfo *)0x0);
          AvatarModifierPackages_RemoveModifier
                    (this,(AvatarModifierPackageType__Enum)pOVar46,(int32_t)PStack_6.klass,
                     (MethodInfo *)0x0);
        }
        else if (MVar45 == ModifierActions__Enum_CancelOut) {
          pOVar46 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                   PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                             (&PStack_6,(MethodInfo *)0x0);
          AvatarModifierPackages_RemoveModifier
                    (this,(AvatarModifierPackageType__Enum)pOVar46,(int32_t)PStack_6.klass,
                     (MethodInfo *)0x0);
          bStack_15 = 0;
        }
      }
    }
    *(undefined4 *)(puStack_17 + iVar38 * 4 + 4) = 0x104;
    uStack_1 = 0xffffffff;
    func_?(&pLStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    if (iVar16 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return bStack_15;
    }
  }
  func_?(iVar16,0,0);
  pcVar48 = (code *)swi(3);
  bVar49 = (*pcVar48)();
  return bVar49;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum type,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarModifierPackages___HasModifier_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)type;
    this_00 = (List_1_VoxelHit_ *)(this->fields).packages;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__AvatarModifierPackages___HasModifier_c__AnonStorey0____m__0_AvatarModifierPackage_
               ,
               MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
              );
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Exists
                        (this_00,(Predicate_1_VoxelHit_ *)this_02,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                        );
      return bVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifierEffect
               (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffee8;
  puVar5 = &stack0xfffffee8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&pLStack_6,0,0x4c);
  bStack_7 = 0;
  uStack_8 = 0;
  iStack_9 = 0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).packages;
  piStack_11 = (int *)&stack0xfffffee8;
  puStack_4 = &stack0xfffffee8;
  if (this_00 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
code_?:
    iVar12 = func_?(0);
  }
  else {
    piStack_11 = (int *)&stack0xfffffee8;
    puStack_4 = &stack0xfffffee8;
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       (&LStack_14,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_6 = pLVar13->l;
    iStack_15 = pLVar13->next;
    iStack_16 = pLVar13->ver;
    pGStack_17 = (pLVar13->current).m_GameObject;
    pBStack_18 = (pLVar13->current).module;
    fStack_19 = (pLVar13->current).distance;
    fStack_20 = (pLVar13->current).index;
    iStack_21 = (pLVar13->current).depth;
    iStack_22 = (pLVar13->current).sortingLayer;
    iStack_23 = (pLVar13->current).sortingOrder;
    fStack_24 = (pLVar13->current).worldPosition.x;
    fStack_25 = (pLVar13->current).worldPosition.y;
    fStack_26 = (pLVar13->current).worldPosition.z;
    fStack_27 = (pLVar13->current).worldNormal.x;
    fStack_28 = (pLVar13->current).worldNormal.y;
    fStack_29 = (pLVar13->current).worldNormal.z;
    VStack_30 = (pLVar13->current).screenPosition;
    iStack_31 = (pLVar13->current).displayIndex;
    uStack_1 = 0;
    piVar32 = (int *)&stack0xfffffee8;
    while (cVar33 = func_?(&pLStack_6,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                  ), cVar33 != '\0') {
      puVar34 = (undefined4 *)
               func_?(&LStack_14.current,&pLStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                              );
      iVar35 = 0;
      uStack_36 = *puVar34;
      uStack_37 = puVar34[1];
      uStack_38 = puVar34[2];
      uStack_39 = puVar34[3];
      iVar12 = puVar34[6];
      uStack_40 = puVar34[8];
      uStack_41 = puVar34[9];
      uStack_42 = puVar34[10];
      uStack_43 = puVar34[0xb];
      uStack_44 = puVar34[0xc];
      uStack_45 = puVar34[0xd];
      uStack_46 = puVar34[0xe];
      uStack_47 = puVar34[0xf];
      while( true ) {
        if (iVar12 == 0) goto code_?;
        piVar32 = piStack_11;
        if (*(int *)(iVar12 + 0xc) <= iVar35) break;
        puVar48 = (undefined8 *)func_?(iVar35);
        piVar32 = piStack_11;
        uVar49 = *puVar48;
        uStack_50._4_4_ = (AvatarModifierEffect__Enum)((ulonglong)uVar49 >> 0x20);
        uStack_50 = uVar49;
        if (uStack_50._4_4_ == modifierEffect) {
          bStack_7 = 1;
          *piStack_11 = 0x7d;
          goto code_?;
        }
        iVar35 = iVar35 + 1;
      }
    }
    *piVar32 = 0x7b;
code_?:
    uStack_1 = 0xffffffff;
    func_?(&pLStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    iVar12 = iStack_9;
    if (iStack_9 == 0) {
      if (*piVar32 != 0x7d) {
        bStack_7 = 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return bStack_7;
    }
  }
  func_?(iVar12,0,0);
  pcVar51 = (code *)swi(3);
  bVar52 = (*pcVar51)();
  return bVar52;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
               int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (modifierPackageType != AvatarModifierPackageType__Enum_None) {
    if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarModifierPackageFactory);
    }
    pAVar1 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                        (&AStack_2,modifierPackageType,(MethodInfo *)0x0);
    pvVar3 = (void *)pAVar1->id;
    iVar4 = (pAVar1->duration).currentCryptoKey;
    AVar5 = (pAVar1->duration).hiddenValue;
    pBVar6 = (pAVar1->duration).hiddenValueOld;
    fVar7 = (pAVar1->duration).fakeValue;
    pTVar8 = *(Transform **)&(pAVar1->duration).inited;
    pAVar9 = pAVar1->avatarModifiers;
    pDVar10 = pAVar1->actionsToTakeVsTypes;
    pSVar11 = (ScaleAnimationBase__Class *)(pAVar1->timeStamp).currentCryptoKey;
    AVar12 = (pAVar1->timeStamp).hiddenValue;
    pBVar13 = (pAVar1->timeStamp).hiddenValueOld;
    fVar14 = (pAVar1->timeStamp).fakeValue;
    fVar15 = *(float *)&(pAVar1->timeStamp).inited;
    fVar16 = *(float *)&pAVar1->persistant;
    fVar17 = (float)pAVar1->avatarModifierPackageType;
    pTVar18 = (Transform *)pAVar1->avatarModifierPackageAdditionPolicy;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    func_?(&AStack_2,0,0x40);
    method_00 = TypeInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2;
    this_01 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = pvVar3;
      (this_01->fields).state = iVar4;
      (this_01->fields).originalScale.x = (float)AVar5;
      (this_01->fields).originalScale.y = (float)pBVar6;
      (this_01->fields).originalScale.z = fVar7;
      (this_01->fields).target = pTVar8;
      (this_01->fields).testState = (int32_t)pAVar9;
      (this_01->fields).OnScaleAnimationStopped =
           (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pDVar10;
      this_01[1].klass = pSVar11;
      this_01[1].monitor = (MonitorData *)AVar12;
      this_01[1].fields._._._._.m_CachedPtr = pBVar13;
      this_01[1].fields.state = (int32_t)fVar14;
      this_01[1].fields.originalScale.x = fVar15;
      this_01[1].fields.originalScale.y = fVar16;
      this_01[1].fields.originalScale.z = fVar17;
      this_01[1].fields.target = pTVar18;
      (this_01->fields)._._._._.m_CachedPtr = (void *)id;
      this_00 = (List_1_VoxelHit_ *)(this->fields).packages;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2____m__0_AvatarModifierPackage_
                 ,
                 MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
                );
      if (this_00 != (List_1_VoxelHit_ *)0x0) {
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__FindIndex
                           (this_00,(Predicate_1_VoxelHit_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                           );
        if (iVar4 == -1) {
          return;
        }
        pLVar19 = (this->fields).packages;
        if (pLVar19 != (List_1_AvatarModifierPackage_ *)0x0) {
          pAVar1 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                    List_1_AvatarModifierPackage__get_Item
                              ((AvatarModifierPackage *)&stack0xffffff3c,pLVar19,iVar4,
                               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                              );
          AStack_2.id = pAVar1->id;
          AStack_2.duration.currentCryptoKey = (pAVar1->duration).currentCryptoKey;
          AStack_2.duration.hiddenValue = (pAVar1->duration).hiddenValue;
          AStack_2.duration.hiddenValueOld = (pAVar1->duration).hiddenValueOld;
          AStack_2.duration.fakeValue = (pAVar1->duration).fakeValue;
          AStack_2.duration.inited = (pAVar1->duration).inited;
          AStack_2.duration._17_3_ = *(undefined3 *)&(pAVar1->duration).field_0x11;
          AStack_2.avatarModifiers = pAVar1->avatarModifiers;
          AStack_2.actionsToTakeVsTypes = pAVar1->actionsToTakeVsTypes;
          AStack_2.timeStamp.currentCryptoKey = (pAVar1->timeStamp).currentCryptoKey;
          AStack_2.timeStamp.hiddenValue = (pAVar1->timeStamp).hiddenValue;
          AStack_2.timeStamp.hiddenValueOld = (pAVar1->timeStamp).hiddenValueOld;
          AStack_2.timeStamp.fakeValue = (pAVar1->timeStamp).fakeValue;
          AStack_2.timeStamp.inited = (pAVar1->timeStamp).inited;
          AStack_2.timeStamp._17_3_ = *(undefined3 *)&(pAVar1->timeStamp).field_0x11;
          AStack_2.persistant = pAVar1->persistant;
          AStack_2._53_3_ = *(undefined3 *)&pAVar1->field_0x35;
          AStack_2.avatarModifierPackageType = pAVar1->avatarModifierPackageType;
          AStack_2.avatarModifierPackageAdditionPolicy =
               pAVar1->avatarModifierPackageAdditionPolicy;
          func_?(&AStack_2);
          pLVar19 = (this->fields).packages;
          if (pLVar19 != (List_1_AvatarModifierPackage_ *)0x0) {
            value.duration.currentCryptoKey = AStack_2.duration.currentCryptoKey;
            value.id = AStack_2.id;
            value.duration.hiddenValue = AStack_2.duration.hiddenValue;
            value.duration.hiddenValueOld = AStack_2.duration.hiddenValueOld;
            value.duration.fakeValue = AStack_2.duration.fakeValue;
            value.duration.inited = AStack_2.duration.inited;
            value.duration._17_3_ = AStack_2.duration._17_3_;
            value.avatarModifiers = AStack_2.avatarModifiers;
            value.actionsToTakeVsTypes = AStack_2.actionsToTakeVsTypes;
            value.timeStamp.currentCryptoKey = AStack_2.timeStamp.currentCryptoKey;
            value.timeStamp.hiddenValue = AStack_2.timeStamp.hiddenValue;
            value.timeStamp.hiddenValueOld = AStack_2.timeStamp.hiddenValueOld;
            value.timeStamp.fakeValue = AStack_2.timeStamp.fakeValue;
            value.timeStamp.inited = AStack_2.timeStamp.inited;
            value.timeStamp._17_3_ = AStack_2.timeStamp._17_3_;
            value.persistant = AStack_2.persistant;
            value._53_3_ = AStack_2._53_3_;
            value.avatarModifierPackageType = AStack_2.avatarModifierPackageType;
            value.avatarModifierPackageAdditionPolicy =
                 AStack_2.avatarModifierPackageAdditionPolicy;
            mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__set_Item
                      (pLVar19,iVar4,value,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                      );
            return;
          }
        }
      }
    }
    func_?();
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  return;
}


/* Void RemoveModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&iStack_1,0,0x40);
  method_00 = TypeInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)modifierPackage.id;
    (this_01->fields).state = modifierPackage.duration.currentCryptoKey;
    (this_01->fields).originalScale.x = (float)modifierPackage.duration.hiddenValue;
    (this_01->fields).originalScale.y = (float)modifierPackage.duration.hiddenValueOld;
    (this_01->fields).originalScale.z = modifierPackage.duration.fakeValue;
    (this_01->fields).target = (Transform *)modifierPackage.duration._16_4_;
    (this_01->fields).testState = (int32_t)modifierPackage.avatarModifiers;
    (this_01->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)modifierPackage.actionsToTakeVsTypes;
    this_01[1].klass = (ScaleAnimationBase__Class *)modifierPackage.timeStamp.currentCryptoKey;
    this_01[1].monitor = (MonitorData *)modifierPackage.timeStamp.hiddenValue;
    this_01[1].fields._._._._.m_CachedPtr = modifierPackage.timeStamp.hiddenValueOld;
    this_01[1].fields.state = (int32_t)modifierPackage.timeStamp.fakeValue;
    this_01[1].fields.originalScale.x = (float)modifierPackage.timeStamp._16_4_;
    this_01[1].fields.originalScale.y = (float)modifierPackage._52_4_;
    this_01[1].fields.originalScale.z = (float)modifierPackage.avatarModifierPackageType;
    this_01[1].fields.target = (Transform *)modifierPackage.avatarModifierPackageAdditionPolicy;
    (this_01->fields)._._._._.m_CachedPtr = (void *)id;
    this_00 = (List_1_VoxelHit_ *)(this->fields).packages;
    modifierPackage.avatarModifierPackageAdditionPolicy =
         func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )modifierPackage.avatarModifierPackageAdditionPolicy,(Object *)this_01,
               MethodInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2____m__0_AvatarModifierPackage_
               ,
               MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
              );
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      index = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
              List_1_VoxelHit__FindIndex
                        (this_00,(Predicate_1_VoxelHit_ *)
                                 modifierPackage.avatarModifierPackageAdditionPolicy,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                        );
      if (index == -1) {
        return;
      }
      pLVar2 = (this->fields).packages;
      if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
        pAVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                 List_1_AvatarModifierPackage__get_Item
                           (&modifierPackage,pLVar2,index,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                           );
        iStack_1 = pAVar3->id;
        iStack_4 = (pAVar3->duration).currentCryptoKey;
        AStack_5 = (pAVar3->duration).hiddenValue;
        pBStack_6 = (pAVar3->duration).hiddenValueOld;
        fStack_7 = (pAVar3->duration).fakeValue;
        uStack_8 = *(undefined4 *)&(pAVar3->duration).inited;
        pAStack_9 = pAVar3->avatarModifiers;
        pDStack_10 = pAVar3->actionsToTakeVsTypes;
        iStack_11 = (pAVar3->timeStamp).currentCryptoKey;
        AStack_12 = (pAVar3->timeStamp).hiddenValue;
        pBStack_13 = (pAVar3->timeStamp).hiddenValueOld;
        fStack_14 = (pAVar3->timeStamp).fakeValue;
        uStack_15 = *(undefined4 *)&(pAVar3->timeStamp).inited;
        uStack_16 = *(undefined4 *)&pAVar3->persistant;
        iStack_17 = pAVar3->avatarModifierPackageType;
        iStack_18 = pAVar3->avatarModifierPackageAdditionPolicy;
        func_?(&iStack_1,1,0);
        pLVar2 = (this->fields).packages;
        if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
          value.duration.currentCryptoKey = iStack_4;
          value.id = iStack_1;
          value.duration.hiddenValue = AStack_5;
          value.duration.hiddenValueOld = pBStack_6;
          value.duration.fakeValue = fStack_7;
          value.duration._16_4_ = uStack_8;
          value.avatarModifiers = pAStack_9;
          value.actionsToTakeVsTypes = pDStack_10;
          value.timeStamp.currentCryptoKey = iStack_11;
          value.timeStamp.hiddenValue = AStack_12;
          value.timeStamp.hiddenValueOld = pBStack_13;
          value.timeStamp.fakeValue = fStack_14;
          value.timeStamp._16_4_ = uStack_15;
          value._52_4_ = uStack_16;
          value.avatarModifierPackageType = iStack_17;
          value.avatarModifierPackageAdditionPolicy = iStack_18;
          mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
          List_1_AvatarModifierPackage__set_Item
                    (pLVar2,index,value,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_Update
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&iStack_1,0,0x40);
  pLVar2 = (this->fields).packages;
  if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                      );
    do {
      do {
        index = (Object *)((int)&index[-1].monitor + 3);
        if ((int)index < 0) {
          return;
        }
        pLVar2 = (this->fields).packages;
        if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        pAVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                 List_1_AvatarModifierPackage__get_Item
                           (&AStack_4,pLVar2,(int32_t)index,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                           );
        iStack_1 = pAVar3->id;
        iStack_5 = (pAVar3->duration).currentCryptoKey;
        AStack_6 = (pAVar3->duration).hiddenValue;
        pBStack_7 = (pAVar3->duration).hiddenValueOld;
        fStack_8 = (pAVar3->duration).fakeValue;
        uStack_9 = *(undefined4 *)&(pAVar3->duration).inited;
        pAStack_10 = pAVar3->avatarModifiers;
        pDStack_11 = pAVar3->actionsToTakeVsTypes;
        iStack_12 = (pAVar3->timeStamp).currentCryptoKey;
        AStack_13 = (pAVar3->timeStamp).hiddenValue;
        pBStack_14 = (pAVar3->timeStamp).hiddenValueOld;
        fStack_15 = (pAVar3->timeStamp).fakeValue;
        uStack_16 = *(undefined4 *)&(pAVar3->timeStamp).inited;
        uStack_17 = *(undefined4 *)&pAVar3->persistant;
        iStack_18 = pAVar3->avatarModifierPackageType;
        iStack_19 = pAVar3->avatarModifierPackageAdditionPolicy;
        cVar20 = func_?(&iStack_1,0);
      } while (cVar20 == '\0');
      this_00 = (Action_1_UnityEngine_EventSystems_RaycastResult_ *)(this->fields).OnModifierExpired
      ;
      if (this_00 != (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
        pLVar2 = (this->fields).packages;
        if ((pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) ||
           (pRVar21 = (RaycastResult *)
                     func_?(&AStack_4,pLVar2,index,
                                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                    ),
           this_00 == (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0)) break;
        mscorlib.dll::System::Action`1[UnityEngine::EventSystems::RaycastResult]::
        Action_1_UnityEngine_EventSystems_RaycastResult__Invoke(this_00,*pRVar21,(MethodInfo *)0x0);
      }
      pLVar2 = (this->fields).packages;
      if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
      List_1_AvatarModifierPackage__RemoveAt
                (pLVar2,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                );
    } while( true );
  }
code_?:
  func_?(0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Int32 <ComputeModifierEffectGroupedById>m__1(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages::
        AvatarModifierPackages__ComputeModifierEffectGroupedById_m__1
                  (AvatarModifierPackage_AvatarModifier x,AvatarModifierPackage_AvatarModifier y,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  y.value = (Func_1_Single_ *)y.avatarModifierType;
  target = (Object *)func_?(TypeInfo__AvatarModifierType,&y.value);
  this = (Enum *)func_?(TypeInfo__AvatarModifierType,&x);
  if (this != (Enum *)0x0) {
    iVar1 = mscorlib.dll::System::Enum::Enum_CompareTo(this,target,(MethodInfo *)0x0);
    func_?(this);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Int32 <HandleModifierEffect>m__0(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages::
        AvatarModifierPackages__HandleModifierEffect_m__0
                  (AvatarModifierPackage_AvatarModifier x,AvatarModifierPackage_AvatarModifier y,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  y.value = (Func_1_Single_ *)y.avatarModifierType;
  target = (Object *)func_?(TypeInfo__AvatarModifierType,&y.value);
  this = (Enum *)func_?(TypeInfo__AvatarModifierType,&x);
  if (this != (Enum *)0x0) {
    iVar1 = mscorlib.dll::System::Enum::Enum_CompareTo(this,target,(MethodInfo *)0x0);
    func_?(this);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* AvatarModifierPackages() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages__ctor
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_AvatarModifierPackage_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
  (this->fields).packages = this_00;
  return;
}


/* Void add_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDisableVehiclesEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnUnequipItemEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_remove_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDisableVehiclesEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_remove_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnUnequipItemEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

