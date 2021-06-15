
/* KogamaSettingBoolBase(String, Boolean, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
               (KogamaSettingBoolBase *this,String *key,bool value,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._._._Parent_k__BackingField = parent;
  (this->fields)._._.key = key;
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  KogamaSettingBool::KogamaSettingBool_set_ValueBool
            ((KogamaSettingBool *)this_00,value,(MethodInfo *)0x0);
  (this->fields).KogamaSettingBool = (KogamaSettingBool *)this_00;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
             ,
             MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Action_System__Object__void__
            );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    a = (Delegate *)(this_00->fields).state;
    do {
      pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (a,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar1 != (Delegate *)0x0) {
        pDVar2 = (Delegate *)0x0;
        if ((Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting___Class *)
            pDVar1->klass ==
            TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
           ) {
          pDVar2 = pDVar1;
        }
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      pDVar1 = (Delegate *)func_?();
      bVar3 = pDVar1 == a;
      a = pDVar1;
      if (bVar3) {
        return;
      }
    } while( true );
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
               (KogamaSettingBoolBase *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pBVar3 = TypeInfo__System__Boolean;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar4 = (bool *)func_?(pOVar2);
        return *pbVar4;
      }
      goto code_?;
    }
  }
  func_?(0);
  pOVar2 = extraout_ECX;
  pBVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pBVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_ValueBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
               (KogamaSettingBoolBase *this,bool value,MethodInfo *method)

{
  obj = (Dictionary_2_System_String_System_Object_ *)(this->fields).KogamaSettingBool;
  if (obj != (Dictionary_2_System_String_System_Object_ *)0x0) {
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    bStack1 = value;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (obj->fields).linkSlots;
    (obj->fields).table = pIVar2;
    if (this_00 != (Link__Array *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                 this_00,obj,
                 MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                );
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

