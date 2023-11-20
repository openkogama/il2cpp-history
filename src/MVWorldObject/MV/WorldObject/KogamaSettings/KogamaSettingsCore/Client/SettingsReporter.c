
/* Void OnValueChange(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_OnValueChange
               (SettingsReporter *this,Dictionary_2_System_Object_System_Object_ *deltaChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
    func_?(&(this->fields).DeltaData,this_00);
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).DeltaData,deltaChange,(MethodInfo *)0x0);
  pMVar1 = (this->fields).worldObject;
  if (pMVar1 != (MVWorldObject *)0x0) {
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pMVar1->fields).data,deltaChange,(MethodInfo *)0x0);
    if ((this->fields).OnValueChangedLocal !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
      (*(((this->fields).OnValueChangedLocal)->fields)._._.invoke_impl)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
    func_?(&(this->fields).DeltaRemovalData,this_00);
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).DeltaRemovalData,deltaChange,(MethodInfo *)0x0);
  pMVar1 = (this->fields).worldObject;
  if (pMVar1 != (MVWorldObject *)0x0) {
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
              ((pMVar1->fields).data,(this->fields).DeltaRemovalData,(MethodInfo *)0x0);
    if ((this->fields).OnValueRemovedLocal !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
      (*(((this->fields).OnValueRemovedLocal)->fields)._._.invoke_impl)();
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
  if ((this->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar1 = (this->fields).worldObject;
    if ((pMVar1 == (MVWorldObject *)0x0) ||
       (pAVar2 = (this->fields).partialDataUpdate,
       pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pMVar1->fields).id,(this->fields).DeltaData,
               (pAVar2->fields)._._.method);
    (this->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    func_?(&(this->fields).DeltaData,0);
  }
  if ((this->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar1 = (this->fields).worldObject;
    if ((pMVar1 == (MVWorldObject *)0x0) ||
       (pAVar2 = (this->fields).partialDataRemove,
       pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pMVar1->fields).id,(this->fields).DeltaRemovalData,
               (pAVar2->fields)._._.method);
    (this->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    func_?(&(this->fields).DeltaRemovalData,0);
  }
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).worldObject = worldObject;
  func_?(&this->fields,worldObject);
  (this->fields).partialDataUpdate = partialDataUpdate;
  func_?(&(this->fields).partialDataUpdate,partialDataUpdate);
  (this->fields).partialDataRemove = partialDataRemove;
  func_?(&(this->fields).partialDataRemove,partialDataRemove);
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  a = (this->fields).OnValueChangedLocal;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(&(this->fields).OnValueChangedLocal,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  a = (this->fields).OnValueRemovedLocal;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(&(this->fields).OnValueRemovedLocal,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  source = (this->fields).OnValueChangedLocal;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(&(this->fields).OnValueChangedLocal,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
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
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  source = (this->fields).OnValueRemovedLocal;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(&(this->fields).OnValueRemovedLocal,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

