
/* KogamaSettingWrapperBase CreateDeepCopy(KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateDeepCopy
          (KogamaSettingWrapperBase *source,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  settingsDictionary =
       (Dictionary_2_System_Object_System_Object_ *)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)settingsDictionary,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1(source,settingsDictionary,(MethodInfo *)0x0);
  pKVar1 = KogamaSettingTools_CreateFromValues
                     (settingsDictionary,source,factoryFunc,(MethodInfo *)0x0);
  return pKVar1;
}


/* KogamaSettingWrapperBase CreateFromValues(Dictionary`2[System.Object,System.Object],
   KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateFromValues
          (Dictionary_2_System_Object_System_Object_ *values,KogamaSettingWrapperBase *prototypeRoot
          ,Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
           *factoryFunc,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKStack_4 = (KogamaSettingWrapperBase *)0x0;
  func_?();
  if (values == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    puStack_5 = (undefined *)func_?(0);
    func_?();
    pcVar6 = (code *)swi(3);
    pKVar7 = (KogamaSettingWrapperBase *)(*pcVar6)();
    return pKVar7;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
             &stack0xffffffa4,(Dictionary_2_WinningConditionType_System_Object_ *)values,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
            );
  uStack_1 = 0;
  do {
    cVar8 = func_?();
    if (cVar8 == '\0') {
      iVar9 = 0x4f;
      goto code_?;
    }
    valuePair = (KeyValuePair_2_System_Object_System_Object_)
                Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)&stack0xffffffb8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                          );
    uVar10 = func_?();
    if (prototypeRoot == (KogamaSettingWrapperBase *)0x0) goto code_?;
    b = (prototypeRoot->fields).key;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    a = (String *)func_?(uVar10,TypeInfo__System__String);
    bVar11 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
  } while (bVar11 == 0);
  pKStack_4 = KogamaSettingTools_CreateFromValues_1
                         (valuePair,prototypeRoot,(KogamaSettingsCollectionBase *)0x0,factoryFunc,
                          (MethodInfo *)0x0);
  iVar9 = 0x51;
code_?:
  uStack_1 = 0xffffffff;
  func_?();
  if (iVar9 == 0x51) {
    *unaff_FS_OFFSET = uStack_3;
    return pKStack_4;
  }
  *unaff_FS_OFFSET = uStack_3;
  return (KogamaSettingWrapperBase *)0x0;
}


/* KogamaSettingWrapperBase CreateFromValues(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingWrapperBase, KogamaSettingsCollectionBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateFromValues_1
          (KeyValuePair_2_System_Object_System_Object_ valuePair,KogamaSettingWrapperBase *prototype
          ,KogamaSettingsCollectionBase *parent,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = (Object *)0x0;
  KStack_7.value = (Object *)0x0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  if (prototype == (KogamaSettingWrapperBase *)0x0) {
    pKVar8 = (KogamaSettingWrapperBase *)0x0;
code_?:
    puStack_9 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    if (factoryFunc !=
        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
         *)0x0) {
      arg1.value = valuePair.value;
      arg1.key = valuePair.key;
      puStack_9 = (undefined4 *)&stack0xffffff9c;
      puStack_4 = &stack0xffffff9c;
      pKVar8 = (KogamaSettingWrapperBase *)
                System.Core.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System
                ::Object,System::Object],Object,Object,Object]::
                Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object__Invoke
                          ((Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
                            *)factoryFunc,arg1,(Object *)pKVar8,(Object *)parent,
                           MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Invoke_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                          );
      *unaff_FS_OFFSET = uStack_3;
      return pKVar8;
    }
code_?:
    func_?(0);
    pTVar10 = extraout_ECX;
    pSVar11 = extraout_EDX;
code_?:
    func_?(pTVar10,pSVar11);
    func_?(prototype,0,0);
  }
  else {
    pKVar12 = prototype->klass;
    bStack_13 = (pKVar12->_1).naturalAligment;
    bVar14 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if ((bStack_13 < bVar14) ||
       ((pKVar12->_1).typeHierarchy[bVar14 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pKVar8 = (KogamaSettingWrapperBase *)0x0;
    if (bVar15) {
      pKVar8 = prototype;
    }
    if (pKVar8 == (KogamaSettingWrapperBase *)0x0) {
      bVar14 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      if ((bStack_13 < bVar14) ||
         ((pKVar12->_1).typeHierarchy[bVar14 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pKVar8 = (KogamaSettingWrapperBase *)0x0;
      if (bVar15) {
        pKVar8 = prototype;
      }
      pKVar16 = (KogamaSettingsCollectionBase__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (pKVar8 != (KogamaSettingWrapperBase *)0x0) goto code_?;
code_?:
      puStack_9 = (undefined4 *)&stack0xffffff9c;
      puStack_4 = &stack0xffffff9c;
      func_?(prototype,pKVar16);
      goto code_?;
    }
    bVar14 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if ((bStack_13 < bVar14) ||
       (cStack_17 = '\x01',
       (pKVar12->_1).typeHierarchy[bVar14 - 1] !=
       (Il2CppClass *)
       TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      cStack_17 = '\0';
    }
    pKVar8 = (KogamaSettingWrapperBase *)0x0;
    if (cStack_17 != '\0') {
      pKVar8 = prototype;
    }
    pKVar16 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (pKVar8 == (KogamaSettingWrapperBase *)0x0) goto code_?;
    if ((bStack_13 <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar12->_1).typeHierarchy[bVar14 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pKVar8 = (KogamaSettingWrapperBase *)0x0;
    if (bVar15) {
      pKVar8 = prototype;
    }
    if (pKVar8 == (KogamaSettingWrapperBase *)0x0) goto code_?;
    puStack_9 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    parent_00 = (KogamaSettingsCollectionBase *)
                (*(code *)pKVar8->klass[1]._0.namespaze)
                          (pKVar8,parent,pKVar8->klass[1]._0.byval_arg.data.dummy);
    pKStack_18 = parent_00;
    pKVar12 = (KogamaSettingWrapperBase__Class *)
              func_?(&valuePair,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
    if (pKVar12 == (KogamaSettingWrapperBase__Class *)0x0) {
      this = (KogamaSettingWrapperBase__Class *)0x0;
    }
    else {
      pDVar19 = (Dictionary_2_WinningConditionType_System_Object___Class *)(pKVar12->_0).image;
      bVar14 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar19->_1).naturalAligment < bVar14) ||
         ((Dictionary_2_System_Object_System_Object___Class *)(pDVar19->_1).typeHierarchy[bVar14 - 1]
          != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      this = (KogamaSettingWrapperBase__Class *)0x0;
      if (bVar15) {
        this = pKVar12;
      }
      pKStack_20 = pKVar12;
      if (this == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
    }
    pKStack_20 = prototype->klass;
    bVar14 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKStack_20->_1).naturalAligment < bVar14) ||
       ((pKStack_20->_1).typeHierarchy[bVar14 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pKVar8 = (KogamaSettingWrapperBase *)0x0;
    if (bVar15) {
      pKVar8 = prototype;
    }
    if (pKVar8 != (KogamaSettingWrapperBase *)0x0) {
      if (this != (KogamaSettingWrapperBase__Class *)0x0) {
        pDVar21 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_22,(Dictionary_2_WinningConditionType_System_Object_ *)this,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_6._0_4_ = pDVar21->dictionary;
        auStack_6._4_4_ = pDVar21->next;
        auStack_6._8_4_ = pDVar21->stamp;
        auStack_6._12_4_ = (pDVar21->current).key;
        auStack_6._16_4_ = (pDVar21->current).value;
        uStack_1 = 0;
        while( true ) {
          cVar23 = func_?();
          if (cVar23 == '\0') {
            *puStack_9 = 0x81;
            uStack_1 = 0xffffffff;
            func_?(auStack_6,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           );
            *unaff_FS_OFFSET = uStack_3;
            return (KogamaSettingWrapperBase *)parent_00;
          }
          KStack_7 = (KeyValuePair_2_System_Object_System_Object_)
                      Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          if (pKVar8 == (KogamaSettingWrapperBase *)0x0) break;
          prototype = (KogamaSettingWrapperBase *)pKVar8[1].klass;
          pTVar10 = (Type *)func_?(&KStack_7,
                                           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                          );
          if ((KogamaSettingWrapperBase__Class *)prototype == (KogamaSettingWrapperBase__Class *)0x0
             ) break;
          key = (Type *)0x0;
          if (pTVar10 != (Type *)0x0) {
            if (pTVar10->klass == (Type__Class *)TypeInfo__System__String) {
              key = pTVar10;
            }
            pSVar11 = TypeInfo__System__String;
            if (key == (Type *)0x0) goto code_?;
          }
          prototype_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)prototype,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                                   );
          pKVar24 = KogamaSettingTools_CreateFromValues_1
                             (KStack_7,(KogamaSettingWrapperBase *)prototype_00,parent_00,
                              factoryFunc,(MethodInfo *)0x0);
          if (parent_00 == (KogamaSettingsCollectionBase *)0x0) break;
          (*(code *)(parent_00->klass->vtable).AddChild.method)
                    (parent_00,pKVar24,(parent_00->klass->vtable).CopyWithOutChildren.methodPtr);
        }
      }
      goto code_?;
    }
  }
  pKVar12 = (KogamaSettingWrapperBase__Class *)
            func_?(prototype,
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
code_?:
  func_?(pKVar12,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pcVar25 = (code *)swi(3);
  pKVar8 = (KogamaSettingWrapperBase *)(*pcVar25)();
  return pKVar8;
}


/* KogamaSettingWrapperBase CreatePrototypeWithUserValues(Dictionary`2[System.Object,System.Object],
   KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreatePrototypeWithUserValues
          (Dictionary_2_System_Object_System_Object_ *userValuesDict,
          KogamaSettingWrapperBase *prototypeRoot,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  source = KogamaSettingTools_CreateFromValues
                     (userValuesDict,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  settingsDictionary =
       (Dictionary_2_System_Object_System_Object_ *)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)settingsDictionary,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (prototypeRoot,settingsDictionary,(MethodInfo *)0x0);
  target = KogamaSettingTools_CreateFromValues
                     (settingsDictionary,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  if (source != (KogamaSettingWrapperBase *)0x0) {
    KogamaSettingTools_OverrideValues(target,source,(MethodInfo *)0x0);
  }
  return target;
}


/* Dictionary`2[System.Object,System.Object] GetSettingBranch(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetSettingBranch(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  while( true ) {
    if (obj == (KogamaSettingWrapperBase *)0x0) {
      return pDVar1;
    }
    if (((((KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass)->_1).
         naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((((KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass)->_1).
        typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pKVar3 = (KogamaSettingsCollectionBase *)(KogamaSettingWrapperBase *)0x0;
    if (bVar2) {
      pKVar3 = (KogamaSettingsCollectionBase *)obj;
    }
    if (pKVar3 == (KogamaSettingsCollectionBase *)0x0) {
      iVar4 = func_?(obj,
                              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                             );
      if (iVar4 == 0) break;
      key = *(String **)(iVar4 + 8);
      iVar4 = func_?(5,iVar4);
      if ((iVar4 == 0) ||
         (value = (CrossPlatformInputManager_VirtualButton *)
                  func_?(0,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                  ,iVar4),
         pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      this = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,(((KogamaSettingsCollectionBase *)obj)->fields)._.key,
                 (CrossPlatformInputManager_VirtualButton *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pDVar1 = this;
    }
    if (obj == (KogamaSettingWrapperBase *)0x0) break;
    obj = (KogamaSettingWrapperBase *)
          (((KogamaSettingsCollectionBase *)obj)->fields)._._Parent_k__BackingField;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object] GetSubTree(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetSubTree(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
  pIStack_1 = (Il2CppGenericClass *)&DAT_?;
  pIStack_2 = (Il2CppRGCTXData *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff90;
  pIVar4 = (Il2CppClass *)&stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  auStack_5._16_4_ = (Object *)0x0;
  pIStack_6 = (Il2CppClass *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_5._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_5._4_4_ = (MethodInfo *)0x0;
  auStack_5._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_5._12_4_ = 0;
  func_?();
  _Stack_24.__klassIndex = -1;
  puStack_8 = &stack0xffffff90;
  pIStack_3 = (Il2CppClass *)&stack0xffffff90;
  if (cRam_? == '\0') {
    puStack_8 = &stack0xffffff90;
    pIStack_3 = (Il2CppClass *)&stack0xffffff90;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar4 = (Il2CppClass *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pIVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  for (pKVar9 = (KogamaSettingsCollectionBase *)obj; pKVar9 != (KogamaSettingsCollectionBase *)0x0;
      pKVar9 = (pKVar9->fields)._._Parent_k__BackingField) {
    if (((((KogamaSettingWrapperBase__Class *)pKVar9->klass)->_1).naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((((KogamaSettingWrapperBase__Class *)pKVar9->klass)->_1).typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    pKVar11 = (KogamaSettingsCollectionBase *)(KogamaSettingWrapperBase *)0x0;
    if (bVar10) {
      pKVar11 = pKVar9;
    }
    if (pKVar11 == (KogamaSettingsCollectionBase *)0x0) {
      iVar12 = func_?();
      if (iVar12 == 0) goto code_?;
      _Stack_28 = (_union_86)((_union_86 *)(iVar12 + 8))->typeHandle;
      iVar12 = func_?();
      if ((iVar12 == 0) ||
         (value = (CrossPlatformInputManager_VirtualButton *)func_?(0),
         pIVar4 == (Il2CppClass *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pIVar4,(String *)_Stack_28.typeHandle,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      pIStack_13 = (Il2CppClass *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pIStack_13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pIStack_13 == (Il2CppClass *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pIStack_13,(pKVar9->fields)._.key,
                 (CrossPlatformInputManager_VirtualButton *)pIVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pIVar4 = pIStack_13;
    }
    if (pKVar9 == (KogamaSettingsCollectionBase *)0x0) goto code_?;
  }
  pIStack_14 = pIVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  _Var10.dummy = (void *)func_?();
  _Stack_28.dummy = _Var10.dummy;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)_Var10.typeHandle,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (obj,(Dictionary_2_System_Object_System_Object_ *)_Var10.typeHandle,(MethodInfo *)0x0);
  _Var14.__klassIndex = -1;
  _Stack_2c.dummy = _Var10.dummy;
  pIStack_13 = pIVar4;
  while( true ) {
    if ((obj == (KogamaSettingWrapperBase *)0x0) || (pIVar4 == (Il2CppClass *)0x0))
    goto code_?;
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pIVar4,(obj->fields).key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar15 != 0) break;
    pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                         &stack0xffffff9c,(Dictionary_2_WinningConditionType_System_Object_ *)pIVar4
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    auStack_5._0_4_ = pDVar16->dictionary;
    auStack_5._4_4_ = pDVar16->next;
    auStack_5._8_4_ = pDVar16->stamp;
    auStack_5._12_4_ = (pDVar16->current).key;
    auStack_5._16_4_ = (pDVar16->current).value;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0x0;
    cVar17 = func_?();
    pIVar18 = pIStack_13;
    if (cVar17 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_5,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      auStack_5._0_4_ = &KStack_7;
      auStack_5._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
      ;
      pIVar18 = (Il2CppClass *)func_?();
      if (pIVar18 == (Il2CppClass *)0x0) {
        pIVar4 = (Il2CppClass *)0x0;
        pIVar18 = pIVar4;
      }
      else {
        bVar19 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton___Class
                *)pIVar18->image)->_1).naturalAligment < bVar19) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton___Class
               *)pIVar18->image)->_1).typeHierarchy[bVar19 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pIVar4 = (Il2CppClass *)0x0;
        if (bVar10) {
          pIVar4 = pIVar18;
        }
        pIVar18 = pIVar4;
        if (pIVar4 == (Il2CppClass *)0x0) goto code_?;
      }
    }
    pIStack_13 = pIVar18;
    _Var10.dummy = (void *)(_Var14.__klassIndex + 1);
    *(undefined4 *)(puStack_8 + _Var10.__klassIndex * 4) = 0x10;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
    _Stack_24.dummy = _Var10.dummy;
    func_?();
    pIVar18 = pIStack_6;
    if (pIStack_6 != (Il2CppClass *)0x0) goto code_?;
    if ((_Var10.dummy == (void *)0xffffffff) ||
       (*(int *)(puStack_8 + _Var10.__klassIndex * 4) != 0x10)) {
      *unaff_FS_OFFSET = pIStack_2;
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    _Stack_24 = _Var14;
    if (_Var10.__klassIndex < 0) {
      _Var14.dummy = _Var10.dummy;
      _Stack_24.dummy = _Var10.dummy;
    }
  }
  key = (obj->fields).key;
  if (_Stack_28.dummy != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)_Stack_28.typeHandle,(Type *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pIVar4,key,(Theme *)value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    *unaff_FS_OFFSET = pIStack_2;
    return (Dictionary_2_System_Object_System_Object_ *)pIStack_14;
  }
code_?:
  func_?();
code_?:
  pIVar18 = (Il2CppClass *)func_?();
code_?:
  func_?(pIVar18);
  pcVar20 = (code *)swi(3);
  pDVar21 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar20)();
  return pDVar21;
}


/* Dictionary`2[System.Object,System.Object] KogamaSettingsToDictionary(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_KogamaSettingsToDictionary(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  settingsDictionary =
       (Dictionary_2_System_Object_System_Object_ *)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)settingsDictionary,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1(obj,settingsDictionary,(MethodInfo *)0x0);
  return settingsDictionary;
}


/* Void KogamaSettingsToDictionary(KogamaSettingWrapperBase,
   Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_KogamaSettingsToDictionary_1
               (KogamaSettingWrapperBase *obj,
               Dictionary_2_System_Object_System_Object_ *settingsDictionary,MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_WinningConditionType_ *)&DAT_?;
  WStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (WinningConditionType__Enum)&WStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pOStack_7 = (Object__Array *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_9 = (Link__Array *)0xffffffff;
  pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (obj != (KogamaSettingWrapperBase *)0x0) {
    pKVar11 = obj->klass;
    bStack_12 = (pKVar11->_1).naturalAligment;
    bVar13 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if ((bStack_12 < bVar13) ||
       ((pKVar11->_1).typeHierarchy[bVar13 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    pKVar15 = (KogamaSettingWrapperBase *)0x0;
    if (bVar14) {
      pKVar15 = obj;
    }
    pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    if (pKVar15 == (KogamaSettingWrapperBase *)0x0) {
code_?:
      if (obj != (KogamaSettingWrapperBase *)0x0) {
        bVar13 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                ->_1).naturalAligment;
        if (((obj->klass->_1).naturalAligment < bVar13) ||
           ((obj->klass->_1).typeHierarchy[bVar13 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        pKVar15 = (KogamaSettingWrapperBase *)0x0;
        if (bVar14) {
          pKVar15 = obj;
        }
        pKVar16 = (KogamaSettingsCollectionBase__Class *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
        ;
        if (pKVar15 == (KogamaSettingWrapperBase *)0x0) goto code_?;
        obj = (KogamaSettingWrapperBase *)(pKVar15->fields).key;
        iVar17 = (*pKVar15->klass[1]._0.gc_desc)(pKVar15,pKVar15->klass[1]._0.name);
        if ((iVar17 != 0) &&
           (value = (CrossPlatformInputManager_VirtualButton *)
                    func_?(0,
                                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                    ,iVar17),
           settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)settingsDictionary,(String *)obj,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
code_?:
          *unaff_FS_OFFSET = WStack_3;
          return;
        }
      }
    }
    else {
      bVar13 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if ((bStack_12 < bVar13) ||
         ((pKVar11->_1).typeHierarchy[bVar13 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      pKVar15 = (KogamaSettingWrapperBase *)0x0;
      if (bVar14) {
        pKVar15 = obj;
      }
      pKVar16 = 
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
      ;
      pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff98;
      puStack_4 = &stack0xffffff98;
      if (pKVar15 == (KogamaSettingWrapperBase *)0x0) goto code_?;
      pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff98;
      puStack_4 = &stack0xffffff98;
      pDStack_18 = (Dictionary_2_System_Object_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDStack_18,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)settingsDictionary,(obj->fields).key,
                   (CrossPlatformInputManager_VirtualButton *)pDStack_18,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (pKVar15[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          pDVar19 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[WinningConditionType,System::Object]::
                   Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                             (&DStack_20,
                              (Dictionary_2_WinningConditionType_System_Object_ *)pKVar15[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                             );
          settingsDictionary_00 = pDStack_18;
          auStack_6._0_4_ = pDVar19->dictionary;
          auStack_6._4_4_ = pDVar19->next;
          auStack_6._8_4_ = pDVar19->stamp;
          auStack_6._12_4_ = (pDVar19->current).key;
          auStack_6._16_4_ = (pDVar19->current).value;
          pSStack_1 = (SerializationInfo *)0x0;
          while (cVar21 = func_?(), cVar21 != '\0') {
            KStack_8 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                  ((LevelRewardsManager *)auStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                                  );
            DStack_20.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
            DStack_20.next =
                 (int32_t)
                 MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
            ;
            pKVar15 = (KogamaSettingWrapperBase *)func_?();
            KogamaSettingTools_KogamaSettingsToDictionary_1
                      (pKVar15,settingsDictionary_00,(MethodInfo *)0x0);
          }
          pWStack_10->klass = (WinningConditionType__Enum__Array__Class *)0x7d;
          pSStack_1 = (SerializationInfo *)0xffffffff;
          func_?();
          if (pOStack_7 == (Object__Array *)0x0) {
            if (pWStack_10->klass == (WinningConditionType__Enum__Array__Class *)0x7d)
            goto code_?;
            goto code_?;
          }
          func_?(pOStack_7,0,0);
        }
      }
    }
  }
  func_?(0);
  pKVar16 = extraout_EDX;
code_?:
  func_?(obj,pKVar16);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OverrideValues(KogamaSettingWrapperBase, KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_OverrideValues
               (KogamaSettingWrapperBase *target,KogamaSettingWrapperBase *source,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  uStack_9 = 0xffffffff;
  if (target == (KogamaSettingWrapperBase *)0x0) {
    piStack_10 = (int *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    message = StringLiteral_Entry_not_found_in_target;
    goto code_?;
  }
  if (source == (KogamaSettingWrapperBase *)0x0) {
    piStack_10 = (int *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    message = StringLiteral_Source_is_null;
    goto code_?;
  }
  piStack_10 = (int *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  pTVar11 = mscorlib.dll::System::Object::Object_GetType((Object *)source,(MethodInfo *)0x0);
  pTVar12 = mscorlib.dll::System::Object::Object_GetType((Object *)target,(MethodInfo *)0x0);
  if (pTVar11 != pTVar12) {
    this_00 = (IsolatedStorageException *)func_?();
    message = StringLiteral_Source_and_target_type_are_not_t;
    goto code_?;
  }
  iVar13 = func_?();
  if (iVar13 == 0) {
    iVar13 = func_?();
    if (iVar13 != 0) {
      iVar13 = func_?();
      iVar14 = func_?();
      if ((iVar13 == 0) || (*(int *)(iVar13 + 0x10) == 0)) goto code_?;
      puVar15 = (undefined4 *)func_?();
      auStack_6._0_4_ = *puVar15;
      auStack_6._4_4_ = puVar15[1];
      auStack_6._8_4_ = puVar15[2];
      auStack_6._12_4_ = puVar15[3];
      auStack_6._16_4_ = puVar15[4];
      uStack_1 = 0;
      while (cVar16 = func_?(), piVar17 = piStack_10, cVar16 != '\0') {
        KStack_8 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                              );
        if (iVar14 == 0) goto code_?;
        this = *(Dictionary_2_System_Type_Pool_ **)(iVar14 + 0x10);
        pTVar11 = (Type *)func_?();
        if (this == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
        target_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              (this,pTVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                              );
        source_00 = (KogamaSettingWrapperBase *)func_?();
        KogamaSettingTools_OverrideValues
                  ((KogamaSettingWrapperBase *)target_00,source_00,(MethodInfo *)0x0);
      }
      *piStack_10 = 0xcf;
      uStack_1 = 0xffffffff;
      func_?();
      if (iStack_7 == 0) {
        if (*piVar17 == 0xcf) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    iVar13 = func_?();
    if (iVar13 != 0) {
      piVar17 = (int *)func_?();
      piVar17 = (int *)(**(code **)(*piVar17 + 0xe8))();
      iVar13 = func_?(source,
                              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                             );
      if (iVar13 != 0) {
        piVar18 = (int *)func_?();
        iVar13 = (**(code **)(*piVar18 + 0xe8))();
        if ((iVar13 != 0) && (piStack_10 = (int *)func_?(), piVar17 != (int *)0x0)) {
          uVar19 = 0;
          uStack_9 = 0;
          iStack_7 = *piVar17;
          if (*(ushort *)(iStack_7 + 0xb6) != 0) {
            do {
              if (*(IKogamaSetting__Class **)(*(int *)(iStack_7 + 0x58) + (uint)uVar19 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting) {
                puVar15 = (undefined4 *)
                         (iStack_7 + 200 +
                         *(int *)(*(int *)(iStack_7 + 0x58) + 4 + (uint)uVar19 * 8) * 8);
                goto code_?;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(iStack_7 + 0xb6));
          }
          puVar15 = (undefined4 *)func_?();
code_?:
          (*(code *)*puVar15)();
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  this_00 = (IsolatedStorageException *)func_?();
  message = StringLiteral_Unknown_base_type;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Traverse(KogamaSettingWrapperBase,
   Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingWrapperBase])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_Traverse
               (KogamaSettingWrapperBase *root,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *callback,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  if (root != (KogamaSettingWrapperBase *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if (callback ==
        (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
code_?:
      func_?(0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               callback,(Dictionary_2_System_String_System_Object_ *)root,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    bVar10 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((root->klass->_1).naturalAligment < bVar10) ||
       ((root->klass->_1).typeHierarchy[bVar10 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    pKVar12 = (KogamaSettingWrapperBase *)0x0;
    if (bVar11) {
      pKVar12 = root;
    }
    if (pKVar12 != (KogamaSettingWrapperBase *)0x0) {
      iVar13 = func_?();
      if ((iVar13 == 0) ||
         (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar13 + 0x10) ==
          (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) goto code_?;
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_15,
                          *(Dictionary_2_WinningConditionType_System_Object_ **)(iVar13 + 0x10),
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar14->dictionary;
      auStack_6._4_4_ = pDVar14->next;
      auStack_6._8_4_ = pDVar14->stamp;
      auStack_6._12_4_ = (pDVar14->current).key;
      auStack_6._16_4_ = (pDVar14->current).value;
      iStack_1 = 0;
      while (cVar16 = func_?(), cVar16 != '\0') {
        KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                              );
        DStack_15.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_15.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
        ;
        pKVar12 = (KogamaSettingWrapperBase *)func_?();
        KogamaSettingTools_Traverse(pKVar12,callback,(MethodInfo *)0x0);
      }
      pLStack_8->klass = (Link__Array__Class *)0x56;
      iStack_1 = -1;
      func_?();
    }
  }
  *unaff_FS_OFFSET = pOStack_3;
  return;
}

