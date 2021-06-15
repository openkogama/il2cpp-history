
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_Initialize
               (SkyboxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = 0;
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar1 = func_?(0,uVar1);
    uVar3 = func_?(uVar1);
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Skybox,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_EDI = (Image *)woID;
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,woID,(MethodInfo *)0x0);
    if (this_02 == (PrefabPool *)0x0) goto code_?;
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    unaff_EDI = (Image *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   (this_03,(Type *)StringLiteral_color,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
    unaff_EBX = TypeInfo__System__Single;
    pSVar4 = (Single__Array *)0x0;
    if (unaff_EDI != (Image *)0x0) {
      pSVar4 = (Single__Array *)func_?(unaff_EDI,TypeInfo__System__Single);
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
    }
    pSVar5 = (this->fields).colorR;
    (this->fields).color = pSVar4;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (pSVar4->max_length == 0) goto code_?;
    if (pSVar5 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar5,StringLiteral_colorR,pSVar4->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar4 = (this->fields).color;
    pSVar5 = (this->fields).colorG;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (pSVar4->max_length < 2) goto code_?;
    if (pSVar5 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar5,StringLiteral_colorG,pSVar4->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar4 = (this->fields).color;
    pSVar5 = (this->fields).colorB;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (pSVar4->max_length < 3) goto code_?;
    if (pSVar5 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar5,StringLiteral_colorB,pSVar4->vector[2],0.0,1.0,(MethodInfo *)0x0);
    unaff_EDI = (Image *)0x0;
    unaff_EBX = (Single__Array__Class *)(this->fields).angle;
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)0x0,(Type *)StringLiteral_sunAngle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Single,pPVar6);
    if ((unaff_EBX == (Single__Array__Class *)0x0) || (pPVar6 == (Pool *)0x0))
    goto code_?;
    if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)unaff_EBX,StringLiteral_sunAngle,*pfVar7,0.0,360.0,
                 (MethodInfo *)0x0);
      unaff_EBX = (Single__Array__Class *)(this->fields).fog;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)0x0,(Type *)StringLiteral_fogDensity,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Single,pPVar6);
      if ((unaff_EBX == (Single__Array__Class *)0x0) || (pPVar6 == (Pool *)0x0))
      goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar7 = (float *)func_?(pPVar6);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)unaff_EBX,StringLiteral_fogDensity,*pfVar7,0.005,0.05,
                 (MethodInfo *)0x0);
      pSVar4 = (this->fields).color;
      unaff_EDI = (this->fields).preview;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      uVar8 = pSVar4->max_length;
      if (uVar8 == 0) goto code_?;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (uVar8 < 2) goto code_?;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      uVar1 = 0;
      if (2 < uVar8) {
        uVar1 = 0;
        uVar2 = 0;
        uVar9 = 0;
        uVar10 = 0;
        func_?(&stack0xffffffec,pSVar4->vector[0],pSVar4->vector[1],pSVar4->vector[2],0);
        if (unaff_EDI != (Image *)0x0) {
          (*(code *)(unaff_EDI->klass->vtable).set_color.method)
                    (unaff_EDI,uVar1,uVar2,uVar9,uVar10,
                     (unaff_EDI->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar3);
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnColorChange() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnColorChange
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uStack_1 = 0;
    fStack_2 = 0.0;
    uVar3 = func_?();
    func_?(uVar3);
  }
  else {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar4 = (this->fields).color;
    pIVar5 = (this->fields).preview;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    uVar6 = pSVar4->max_length;
    if (uVar6 == 0) goto code_?;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (1 < uVar6) {
      if (pSVar4 != (Single__Array *)0x0) {
        uStack_1 = 0;
        if (uVar6 < 3) goto code_?;
        fStack_2 = pSVar4->vector[2];
        uStack_1 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        func_?(&fStack_2,pSVar4->vector[0],pSVar4->vector[1]);
        if (pIVar5 != (Image *)0x0) {
          (*(code *)(pIVar5->klass->vtable).set_color.method)
                    (pIVar5,fStack_2,uStack_1,uStack_7,uStack_8,
                     (pIVar5->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
      goto code_?;
    }
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uVar3 = func_?();
  func_?(uVar3);
code_?:
  fStack_2 = 0.0;
  uVar3 = func_?();
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnSettingChanged
               (SkyboxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_Unknown_key__,key,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pSVar2 = (this->fields).color;
      if (pSVar2 == (Single__Array *)0x0) goto code_?;
      pfVar3 = (float *)func_?(value,TypeInfo__System__Single);
      if (1 < pSVar2->max_length) {
        pSVar2->vector[1] = *pfVar3;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorB,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_sunAngle,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_fogDensity,(MethodInfo *)0x0);
        if (bVar1 == 0) goto code_?;
        pSVar4 = (this->fields).settingsBase;
        if (pSVar4 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar4,key,value,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar4 = (this->fields).settingsBase;
        if (pSVar4 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar4,key,value,(MethodInfo *)0x0);
          SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pSVar2 = (this->fields).color;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    pfVar3 = (float *)func_?(value,TypeInfo__System__Single);
    if (2 < pSVar2->max_length) {
      pSVar2->vector[2] = *pfVar3;
      SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pSVar2 = (this->fields).color;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (value == (Object *)0x0) goto code_?;
    pSVar5 = TypeInfo__System__Single;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar3 = (float *)func_?(value);
      if (pSVar2->max_length != 0) {
        pSVar2->vector[0] = *pfVar3;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
      }
      uVar6 = func_?(0);
      func_?(uVar6);
      value = extraout_ECX;
      pSVar5 = extraout_EDX;
    }
    func_?(value,pSVar5);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SkyboxSettings() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings__ctor
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
  (this->fields).color = pSVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

