
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
  ppDVar1 = &(this->fields).DeltaData;
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
    *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
    func_?(ppDVar1,this_00);
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            (*ppDVar1,deltaChange,(MethodInfo *)0x0);
  pMVar2 = (this->fields).worldObject;
  if (pMVar2 != (MVWorldObject *)0x0) {
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pMVar2->fields).data,deltaChange,(MethodInfo *)0x0);
    pAVar3 = (this->fields).OnValueChangedLocal;
    if (pAVar3 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  0x0) {
      (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  ppDVar1 = &(this->fields).DeltaRemovalData;
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
    *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
    func_?(ppDVar1,this_00);
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            (*ppDVar1,deltaChange,(MethodInfo *)0x0);
  pMVar2 = (this->fields).worldObject;
  if (pMVar2 != (MVWorldObject *)0x0) {
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
              ((pMVar2->fields).data,*ppDVar1,(MethodInfo *)0x0);
    pAVar3 = (this->fields).OnValueRemovedLocal;
    if (pAVar3 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  0x0) {
      (*(pAVar3->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_Submit(SettingsReporter *this,MethodInfo *method)

{
  pDVar1 = (this->fields).DeltaData;
  ppDVar2 = &(this->fields).DeltaData;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar3 = (this->fields).worldObject;
    if ((pMVar3 == (MVWorldObject *)0x0) ||
       (pAVar4 = (this->fields).partialDataUpdate,
       pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,pDVar1,
               (pAVar4->fields)._._.method);
    *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    func_?(ppDVar2,0);
  }
  pDVar1 = (this->fields).DeltaRemovalData;
  ppDVar2 = &(this->fields).DeltaRemovalData;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar3 = (this->fields).worldObject;
    if ((pMVar3 == (MVWorldObject *)0x0) ||
       (pAVar4 = (this->fields).partialDataRemove,
       pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,pDVar1,
               (pAVar4->fields)._._.method);
    *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    func_?(ppDVar2,0);
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
  ppAVar1 = &(this->fields).partialDataUpdate;
  *ppAVar1 = partialDataUpdate;
  func_?(ppAVar1,partialDataUpdate);
  ppAVar1 = &(this->fields).partialDataRemove;
  *ppAVar1 = partialDataRemove;
  func_?(ppAVar1,partialDataRemove);
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
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

