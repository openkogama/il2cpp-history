
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::FireSettings::FireSettings_Initialize
               (FireSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  id = woID;
  pFVar1 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Fire,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_02 = (PrefabPool *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,id,(MethodInfo *)0x0);
  if (this_02 == (PrefabPool *)0x0) goto code_?;
  this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
  if (this_03 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_03,StringLiteral_I,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 == 0) {
    this = (FireSettings *)0x40a00000;
    pTVar3 = (Theme *)func_?(TypeInfo__System__Single,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_03,StringLiteral_I,pTVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_03,StringLiteral_C,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 == 0) {
    pTVar3 = (Theme *)func_?(TypeInfo__System__Single,3);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pTVar3,__field_5634B569C5020C3164DDD5018822998BFE3BFB90_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_03,StringLiteral_C,pTVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_C,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  this = (FireSettings *)TypeInfo__System__Single;
  if (pPVar4 == (Pool *)0x0) {
    pSVar5 = (Single__Array *)0x0;
code_?:
    pSVar6 = (pFVar1->fields).colorR;
    (pFVar1->fields).color = pSVar5;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_R,pSVar5->vector[0],0.3,1.0,(MethodInfo *)0x0);
    pSVar5 = (pFVar1->fields).color;
    pSVar6 = (pFVar1->fields).colorG;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 2) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_G,pSVar5->vector[1],0.3,1.0,(MethodInfo *)0x0);
    pSVar5 = (pFVar1->fields).color;
    pSVar6 = (pFVar1->fields).colorB;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 3) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    root = (GameObject *)0x0;
    woID = 0x3f800000;
    this = (FireSettings *)0x3e99999a;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_B,pSVar5->vector[2],0.3,1.0,(MethodInfo *)0x0);
    root = (GameObject *)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pSVar6 = (pFVar1->fields).intensity;
    woID = (int32_t)StringLiteral_I;
    this = (FireSettings *)this_03;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_I,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar7 = CONCAT44(TypeInfo__System__Single,pPVar4);
    if ((pSVar6 == (SettingsSlider *)0x0) || (pPVar4 == (Pool *)0x0)) goto code_?;
    if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      in_stack_8 = &UNK_?;
      in_stack_9 = pPVar4;
      pfVar10 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_I,*pfVar10,1.0,20.0,(MethodInfo *)0x0);
      pSVar5 = (pFVar1->fields).color;
      pIVar11 = (pFVar1->fields).preview;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      uVar12 = pSVar5->max_length;
      if (uVar12 == 0) goto code_?;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      if (uVar12 < 2) goto code_?;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      uVar13 = 0;
      if (2 < uVar12) {
        uVar14 = 0;
        uVar13 = 0;
        uVar15 = 0;
        uVar16 = 0;
        func_?(&stack0xffffffec,pSVar5->vector[0],pSVar5->vector[1],pSVar5->vector[2]);
        if (pIVar11 != (Image *)0x0) {
          (*(code *)(pIVar11->klass->vtable).set_color.method)
                    (pIVar11,uVar14,uVar13,uVar15,uVar16,
                     (pIVar11->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pSVar5 = (Single__Array *)func_?(pPVar4,TypeInfo__System__Single);
    if (pSVar5 != (Single__Array *)0x0) goto code_?;
    func_?(pPVar4,this);
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
code_?:
    uVar13 = 0;
    uVar14 = func_?(0,0);
    func_?(uVar14);
code_?:
    uVar14 = func_?(0,uVar13);
    uVar7 = func_?(uVar14);
  }
  func_?(uVar7);
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::FireSettings::FireSettings_OnSettingChanged
               (FireSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(key,StringLiteral_R,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality(key,StringLiteral_G,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_B,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pSVar2 = (this->fields).settingsBase;
        if (pSVar2 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar3 = (this->fields).color;
        if (pSVar3 != (Single__Array *)0x0) {
          pfVar4 = (float *)func_?();
          if (pSVar3->max_length < 3) {
            uVar5 = func_?(0,0);
            func_?(uVar5);
code_?:
            uVar5 = func_?(0);
            func_?(uVar5);
code_?:
            uVar5 = func_?(0);
            func_?(uVar5);
code_?:
            uVar5 = func_?(0);
            func_?(uVar5);
          }
          else {
            pSVar3->vector[2] = *pfVar4;
            pSVar2 = (this->fields).settingsBase;
            if (pSVar2 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (pSVar2,StringLiteral_C,(Object *)(this->fields).color,(MethodInfo *)0x0);
              pSVar3 = (this->fields).color;
              pIVar6 = (this->fields).preview;
              if (pSVar3 != (Single__Array *)0x0) {
                uVar7 = pSVar3->max_length;
                if (uVar7 == 0) goto code_?;
                if (pSVar3 != (Single__Array *)0x0) {
                  if (uVar7 < 2) goto code_?;
                  if (pSVar3 != (Single__Array *)0x0) {
                    if (2 < uVar7) {
                      puVar8 = (undefined1 *)0x0;
                      fVar9 = 0.0;
                      fVar10 = 0.0;
                      fVar11 = 0.0;
                      func_?(&stack0xffffffec,pSVar3->vector[0],pSVar3->vector[1],
                                      pSVar3->vector[2]);
                      goto joined_?;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
    }
    else {
      pSVar3 = (this->fields).color;
      if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar4 = (float *)func_?();
      if (1 < pSVar3->max_length) {
        pSVar3->vector[1] = *pfVar4;
        goto code_?;
      }
    }
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
    value = extraout_ECX;
  }
  else {
    pSVar3 = (this->fields).color;
    if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar4 = (float *)func_?();
      if (pSVar3->max_length == 0) goto code_?;
      pSVar3->vector[0] = *pfVar4;
code_?:
      pSVar2 = (this->fields).settingsBase;
      if (pSVar2 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged
                (pSVar2,StringLiteral_C,(Object *)(this->fields).color,(MethodInfo *)0x0);
      pSVar3 = (this->fields).color;
      pIVar6 = (this->fields).preview;
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      uVar7 = pSVar3->max_length;
      if (uVar7 == 0) goto code_?;
      fVar9 = pSVar3->vector[0];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (uVar7 < 2) goto code_?;
      fVar10 = pSVar3->vector[1];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (2 < uVar7) {
        fVar11 = pSVar3->vector[2];
        puVar8 = &stack0xffffffec;
        func_?();
joined_?:
        if (pIVar6 != (Image *)0x0) {
          (*(code *)(pIVar6->klass->vtable).set_color.method)(pIVar6,puVar8,fVar9,fVar10,fVar11);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(value);
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* FireSettings() */

void Assembly-CSharp.dll::FireSettings::FireSettings__ctor(FireSettings *this,MethodInfo *method)

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

