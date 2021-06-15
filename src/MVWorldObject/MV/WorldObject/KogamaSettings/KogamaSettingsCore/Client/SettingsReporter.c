
/* Void OnValueChange(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_OnValueChange
               (SettingsReporter *this,Dictionary_2_System_Object_System_Object_ *deltaChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).DeltaData;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).DeltaData = pDVar1;
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            (pDVar1,deltaChange,(MethodInfo *)0x0);
  this_00 = (PrefabPool *)(this->fields).worldObject;
  if (this_00 != (PrefabPool *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                       (this_00,(MethodInfo *)0x0);
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (pDVar1,deltaChange,(MethodInfo *)0x0);
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).OnValueChangedLocal;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)deltaChange,
                 MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValueRemoved(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_OnValueRemoved
               (SettingsReporter *this,Dictionary_2_System_Object_System_Object_ *deltaChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).DeltaRemovalData;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).DeltaRemovalData = pDVar1;
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            (pDVar1,deltaChange,(MethodInfo *)0x0);
  this_00 = (PrefabPool *)(this->fields).worldObject;
  if (this_00 != (PrefabPool *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                       (this_00,(MethodInfo *)0x0);
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
              (pDVar1,(this->fields).DeltaRemovalData,(MethodInfo *)0x0);
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).OnValueRemovedLocal;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)
                         (this->fields).DeltaRemovalData,
                 MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_Submit(SettingsReporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar1 = (this->fields).worldObject;
    pAVar2 = (Action_2_Int32_Object_ *)(this->fields).partialDataUpdate;
    if ((pMVar1 == (MVWorldObject *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
       pAVar2 == (Action_2_Int32_Object_ *)0x0)) goto code_?;
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (pAVar2,(int32_t)pIVar3,(Object *)(this->fields).DeltaData,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
              );
    (this->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  if ((this->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    return;
  }
  pMVar1 = (this->fields).worldObject;
  pAVar2 = (Action_2_Int32_Object_ *)(this->fields).partialDataRemove;
  if ((pMVar1 != (MVWorldObject *)0x0) &&
     (pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
     pAVar2 != (Action_2_Int32_Object_ *)0x0)) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (pAVar2,(int32_t)pIVar3,(Object *)(this->fields).DeltaRemovalData,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
              );
    (this->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SettingsReporter(MVWorldObject,
   Action`2[Int32,System.Collections.Generic.Dictionary`2[System.Object,System.Object]],
   Action`2[Int32,System.Collections.Generic.Dictionary`2[System.Object,System.Object]]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter__ctor
               (SettingsReporter *this,MVWorldObject *worldObject,
               Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *partialDataUpdate,
               Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *partialDataRemove,MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).worldObject = worldObject;
  (this->fields).partialDataUpdate = partialDataUpdate;
  (this->fields).partialDataRemove = partialDataRemove;
  return;
}


/* Void 
   add_OnValueChangedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_add_OnValueChangedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   add_OnValueRemovedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_add_OnValueRemovedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   remove_OnValueChangedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_remove_OnValueChangedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   remove_OnValueRemovedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_remove_OnValueRemovedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

