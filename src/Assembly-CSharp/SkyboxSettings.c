
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_Initialize
               (SkyboxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_fogDensity);
    func_?(&StringLiteral_sunAngle);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar1 = func_?();
code_?:
    func_?(uVar1);
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Skybox,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar2->fields).data;
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) {
      (this->fields).color = (Single__Array *)0x0;
    }
    else {
      pSVar4 = (Single__Array *)func_?();
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      (this->fields).color = pSVar4;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pSVar4 = (this->fields).color;
    pSVar6 = (this->fields).colorR;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (pSVar4->max_length != 0) {
      if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_colorR,pSVar4->vector[0],0.0,1.0,(MethodInfo *)0x0);
      pSVar4 = (this->fields).color;
      pSVar6 = (this->fields).colorG;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (pSVar4->max_length < 2) goto code_?;
      if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_colorG,pSVar4->vector[1],0.0,1.0,(MethodInfo *)0x0);
      pSVar4 = (this->fields).color;
      pSVar6 = (this->fields).colorB;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (pSVar4->max_length < 3) goto code_?;
      if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_colorB,pSVar4->vector[2],0.0,1.0,(MethodInfo *)0x0);
      pSVar6 = (this->fields).angle;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         &UNK_?,(Object *)StringLiteral_sunAngle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar1 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
      if ((pSVar6 == (SettingsSlider *)0x0) || (TVar3.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar7 = (float *)func_?(TVar3.m_Index);
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar6,StringLiteral_sunAngle,*pfVar7,0.0,360.0,(MethodInfo *)0x0);
        pSVar6 = (this->fields).fog;
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           &UNK_?,(Object *)StringLiteral_fogDensity,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar1 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
        if ((pSVar6 != (SettingsSlider *)0x0) && (TVar3.m_Index != 0)) {
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar7 = (float *)func_?(TVar3.m_Index);
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar6,StringLiteral_fogDensity,*pfVar7,0.005,0.05,(MethodInfo *)0x0);
          pSVar4 = (this->fields).color;
          pIVar8 = (this->fields).preview;
          if (pSVar4 != (Single__Array *)0x0) {
            if (((pSVar4->max_length == 0) || (pSVar4->max_length < 2)) || (pSVar4->max_length < 3))
            goto code_?;
            if (pIVar8 != (Image *)0x0) {
              (*(code *)(pIVar8->klass->vtable).set_color.method)
                        (pIVar8,pSVar4->vector[0],pSVar4->vector[1],pSVar4->vector[2],0x3f800000,
                         (pIVar8->klass->vtable).get_raycastTarget.methodPtr);
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnColorChange() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnColorChange
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar1 = (this->fields).color;
    pIVar2 = (this->fields).preview;
    if (pSVar1 != (Single__Array *)0x0) {
      if (((pSVar1->max_length == 0) || (pSVar1->max_length < 2)) || (pSVar1->max_length < 3))
      goto code_?;
      if (pIVar2 != (Image *)0x0) {
        (*(code *)(pIVar2->klass->vtable).set_color.method)
                  (pIVar2,pSVar1->vector[0],pSVar1->vector[1],pSVar1->vector[2],0x3f800000,
                   (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnSettingChanged
               (SkyboxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_Unknown_key__);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_fogDensity);
    func_?(&StringLiteral_sunAngle);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_colorB;
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_sunAngle,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_fogDensity,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            pSVar2 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Unknown_key__,key,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar2,(MethodInfo *)0x0);
            return;
          }
          if ((SettingsBase *)pSVar2[1].monitor != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      ((SettingsBase *)pSVar2[1].monitor,key,(Object *)key,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((SettingsBase *)pSVar2[1].monitor != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    ((SettingsBase *)pSVar2[1].monitor,key,(Object *)key,(MethodInfo *)0x0);
          SkyboxSettings_OnColorChange((SkyboxSettings *)pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar3 = pSVar2[1].klass;
      if (pSVar3 == (String__Class *)0x0) goto code_?;
      if (value == (Object *)0x0) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      p_Var6 = (_union_86 *)func_?();
      if ((char *)0x2 < (pSVar3->_0).namespaze) {
        (pSVar3->_0).this_arg.data = *p_Var6;
        SkyboxSettings_OnColorChange((SkyboxSettings *)pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar4 = (this->fields).color;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (value == (Object *)0x0) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar5 = (float *)func_?();
      if (1 < pSVar4->max_length) {
        pSVar4->vector[1] = *pfVar5;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSVar4 = (this->fields).color;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?(value);
      if (pSVar4->max_length != 0) {
        pSVar4->vector[0] = *pfVar5;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
      }
    }
    else {
code_?:
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SkyboxSettings() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings__ctor
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
  (this->fields).color = pSVar1;
  func_?(&(this->fields).color,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

