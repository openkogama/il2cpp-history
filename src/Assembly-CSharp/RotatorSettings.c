
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_Initialize
               (RotatorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Rotator);
    func_?(&StringLiteral_AngularSpeed);
    func_?(&StringLiteral_BlueprintData_AngularSpeed);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Rotator,(MethodInfo *)0x0);
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
  if (woID == -1) goto code_?;
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0), pMVar1 == (MVWorldObject *)0x0)) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
  }
  else {
    pDVar3 = (pMVar1->fields).data;
    (this->fields).woID = woID;
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar3,(Object *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
      func_?();
      pDVar3 = (this->fields).blueprintData;
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar3,(Object *)StringLiteral_AngularSpeed,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar4);
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar5 = (float *)func_?(pOVar4);
        this_01 = (this->fields).slider;
        if (this_01 != (SettingsSlider *)0x0) {
          value = *pfVar5;
          SettingsSlider::SettingsSlider_Initialize
                    (this_01,StringLiteral_BlueprintData_AngularSpeed,value,0.0,5.0,
                     (MethodInfo *)0x0);
          this_02 = (this->fields).inputField;
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_02,StringLiteral_BlueprintData_AngularSpeed,value,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (pDVar3->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar3->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      (this->fields).blueprintData = pDVar3;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (pDVar3->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar3->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  this_04 = (NotImplementedException *)func_?();
  func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_04,(MethodInfo *)0x0);
  func_?(&MethodInfo__RotatorSettings__Initialize_int__UnityEngine__GameObject_);
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_OnSettingChanged
               (RotatorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (key != (String *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this->fields).woID;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    mscorlib.dll::System::Convert::Convert_ToSingle
              (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_00,worldObjectID,key,value_00,(MethodInfo *)0x0);
  }
  return;
}

