
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_Initialize
               (RotatorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Rotator,(MethodInfo *)0x0);
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,pSVar1,(MethodInfo *)0x0);
  if (woID == -1) goto code_?;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    this_04 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,woID,(MethodInfo *)0x0);
    if (this_04 == (PrefabPool *)0x0) goto code_?;
    this_05 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
    (this->fields).woID = woID;
    if (this_05 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_05,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this_06 = pDVar2;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      (this->fields).blueprintData = this_06;
      if (this_06 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_06,
                          (Type *)StringLiteral_AngularSpeed,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar3 == (Pool *)0x0) goto code_?;
      if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar4 = (float *)func_?();
        pSVar1 = StringLiteral_BlueprintData_AngularSpeed;
        this_01 = (this->fields).slider;
        if (this_01 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (this_01,StringLiteral_BlueprintData_AngularSpeed,*pfVar4,0.0,5.0,
                     (MethodInfo *)0x0);
          this_02 = (this->fields).inputField;
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_02,StringLiteral_BlueprintData_AngularSpeed,(float)pSVar1,
                       (MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((((Dictionary_2_System_Type_Pool___Class *)pDVar2->klass)->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Type_Pool___Class *)pDVar2->klass)->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_06 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar6) {
      this_06 = pDVar2;
    }
    if (this_06 != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  func_?();
code_?:
  this_07 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_07,(MethodInfo *)0x0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_OnSettingChanged
               (RotatorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != (String *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this->fields).woID;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    mscorlib.dll::System::Convert::Convert_ToSingle_14(value,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
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

