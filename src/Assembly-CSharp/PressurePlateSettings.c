
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PressurePlateSettings::PressurePlateSettings_Initialize
               (PressurePlateSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_hide);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pPVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0)
  ;
  if (id == -1) {
    this = (PressurePlateSettings *)
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (PressurePlateSettings *)((uint)this & 0xffffff);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)StringLiteral_hide,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_03 = (pPVar1->fields).toggle;
  }
  else {
    this = (PressurePlateSettings *)0x0;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    woID = 0;
    this = (PressurePlateSettings *)id;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,id,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) goto code_?;
    this_02 = (pMVar3->fields).data;
    this_03 = (pPVar1->fields).toggle;
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_02,(Object *)StringLiteral_hide,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if ((this_03 != (SettingsToggle *)0x0) && (pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?(pOVar2);
      SettingsToggle::SettingsToggle_Initialize
                (this_03,StringLiteral_hide,*pbVar4,(MethodInfo *)0x0);
      return;
    }
    func_?(pOVar2,TypeInfo__System__Boolean);
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

